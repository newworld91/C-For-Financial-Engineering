#include "OptionData.hpp"
#include "UtilitiesDJD/RNG/NormalGenerator.hpp"
#include "UtilitiesDJD/Geometry/Range.cpp"
#include "UtilitiesDJD/VectorsAndMatrices/ArrayMechanisms.cpp"
#include <boost/tuple/tuple.hpp>
#include <boost/tuple/tuple_io.hpp>
#include <cmath>
#include <iostream>

template <class T> void print(const std::vector<T>& myList)
{  // A generic print function for vectors

    std::cout << std::endl << "Size of vector is " << myList.size() << "\n[";

    // We must use a const iterator here, otherwise we get a compiler error.
    std::vector<T>::const_iterator i;
    for (i = myList.begin(); i != myList.end(); ++i)
    {
        std::cout << *i << ",";

    }

    std::cout << "]\n";
}

template <typename T>
boost::tuple<T, T> SDSE(const std::vector<T>& price, const T& r, const T& T)
{
    T temp1(0), temp2(0);
    for (int i = 0; i < price.size(); i++)
    {
        temp1 += price[i] * price[i];
        temp2 += price[i];
    }

    int M = price.size();
    T sd = sqrt(temp1 - 1 / M * temp2 * temp2) * exp(-2 * r * T) / (M - 1);
    T se = sd / sqrt(M);

    return boost::make_tuple(sd, se);
}

namespace SDEDefinition
{ // Defines drift + diffusion + data

    OptionData* data;				// The data for the option MC

    double drift(double t, double X)
    { // Drift term

        return (data->r)*X; // r - D
    }


    double diffusion(double t, double X)
    { // Diffusion term

        double betaCEV = 1.0;
        return data->sig * pow(X, betaCEV);

    }

    double diffusionDerivative(double t, double X)
    { // Diffusion term, needed for the Milstein method

        double betaCEV = 1.0;
        return 0.5 * (data->sig) * (betaCEV) * pow(X, 2.0 * betaCEV - 1.0);
    }
} // End of namespace

int main()
{
    typedef boost::tuple<double, double, double, double, double> SZ5Tuple;
    vector<SZ5Tuple> vector1;
    vector1.push_back(boost::make_tuple(0.25, 65.0, 0.30, 0.08, 60.0));
    vector1.push_back(boost::make_tuple(1.00, 100.0, 0.20, 0.00, 100.0));

    // Vector to store the prices of put and call.
    vector<double> vecCallPrice, vecPutPrice;

    for (int i = 0; i < vector1.size(); i++)
    {
        OptionData myOption;
        myOption.T = vector1[i].get<0>();
        myOption.K = vector1[i].get<1>();
        myOption.sig = vector1[i].get<2>();
        myOption.r = vector1[i].get<3>();
        myOption.type = 1;
        double S_0 = vector1[i].get<4>();

        long N = 100;
        std::cout << "Number of subintervals in time: ";
        std::cin >> N;

        // Create the basic SDE (Context class).
        Range<double> range(0.0, myOption.T);
        double VOld = S_0;
        double VNew;

        Vector<double, long> x = range.mesh(N);

        // V2 mediator stuff.
        long NSim = 50000;
        std::cout << "Number of simulations: ";
        std::cin >> NSim;

        double k = myOption.T / double(N);
        double sqrk = sqrt(k);

        // Normal random number.
        double dW;
        // Call option price.
        double price1 = 0.0;
        // Put option price.
        double price2 = 0.0;

        // NormalGenerator is a base class.
        NormalGenerator* myNormal = new BoostNormal();

        using namespace SDEDefinition;
        data = &myOption;

        Vector<double> res;
        int count = 0; // Number of times S hits origin.

        // A.
        for (long i = 1; i <= NSim; ++i)
        { // Calculate a path at each iteration.

            if ((i / 10000) * 10000 == i)
            {// Give status after each 1000th iteration.

                std::cout << i << std::endl;
            }

            VOld = S_0;
            for (long index = x.MinIndex() + 1; index <= x.MaxIndex(); ++index)
            {

                // Create a random number.
                dW = myNormal->getNormal();

                // The FDM (in this case explicit Euler).
                VNew = VOld + (k * drift(x[index - 1], VOld))
                       + (sqrk * diffusion(x[index - 1], VOld) * dW);

                VOld = VNew;

                // Spurious values.
                if (VNew <= 0.0) count++;
            }

            double tmp1 = myOption.myPayOffFunction(VNew);
            price1 += (tmp1) / double(NSim);
            vecCallPrice.push_back(tmp1);
            myOption.type = -1;
            double tmp2 = myOption.myPayOffFunction(VNew);
            price2 += (tmp2) / double(NSim);
            vecPutPrice.push_back(tmp2);
            myOption.type = 1;
        }

        // D. Finally, discounting the average price.
        price1 *= exp(-myOption.r * myOption.T);
        price2 *= exp(-myOption.r * myOption.T);

        // Cleanup; V2 use scoped pointer.
        delete myNormal;

        std::cout << "Price, after discounting: Call = " << price1 << ", Put = " << price2 << std::endl;
        std::cout << "Number of times origin is hit: " << count << endl;

        // Print SD and SE.
        boost::tuple<double, double> tupleCall = SDSE<double>(vecCallPrice, myOption.r, myOption.T);
        boost::tuple<double, double> tuplePut = SDSE<double>(vecPutPrice, myOption.r, myOption.T);
        std::cout << "Batch " << i + 1 << ", Call: NT = " << N << ", NSIM = " << NSim
                  << ", SD = " << tupleCall.get<0>() << ", SE = " << tupleCall.get<1>() << endl;
        std::cout << "Batch " << i + 1 << ", Put: NT = " << N << ", NSIM = " << NSim
                  << ", SD = " << tuplePut.get<0>() << ", SE = " << tuplePut.get<1>() << endl;
    }

    return 0;
}

 //  Results:

//  Number of sub intervals: 900
/*
Number of simulations: 100 000
Answer Part a)
For Batch 1:
	Call Price: 2.11662
		SD: 0.0142078
		SE: 4.4929e-005
	Put Price: 5.87702
		SD: 0.019153
		SE: 6.05672e-005
For Batch 2:
Call Price: 7.91053
		SD: 0.0414185
		SE: 0.000130977
	Put Price: 8.01616
		SD: 0.0414185
		SE: 0.000130977
 Price, after discounting: 0.200903,
Number of times origin is hit: 0
Standard Deviation: 0.00322095
Standard Error: 1.01855e-005
For Batch 3:
Call Price: 0.200903
		SD: 0.00322095
		SE: 1.01855e-005
 	Put Price: 4.08337
		SD: 0.00662296
		SE: 2.09436e-005
For Batch 4:
Call Price: 91.3185
		SD: 1.14818
		SE: 0.00363085
	Put Price: 1.26111
		SD: 0.00779842
		SE: 2.46608e-005
*///
// Created by Steve on 11/27/18.
//

