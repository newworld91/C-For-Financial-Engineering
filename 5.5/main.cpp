#include <boost/math/distributions/normal.hpp>
#include <boost/math/distributions/gamma.hpp>
#include <boost/math/distributions.hpp> // For non-member functions of distributions
#include <vector>
#include <iostream>

using namespace std;

int main()
{

    using namespace boost::math;

    double scaleParameter1 = 0.5;

    exponential_distribution<> myExponential1(scaleParameter1);
    cout << "Mean:" << mean(myExponential1)
         << ",standard deviation: "
         << standard_deviation(myExponential1) << endl;

    double x = 10.25;

    cout << "pdf: " << pdf(myExponential1, x) << endl;
    cout << "cdf: " << cdf(myExponential1, x) << endl;

    float scaleParameter2 = 0.5;

    exponential_distribution<float> myExponential2(scaleParameter2);
    cout << "Mean: " << mean(myExponential2) << ", standard deviation: "
         << standard_deviation(myExponential2) << endl;
    cout << "pdf: " << pdf(myExponential2, x) << endl;
    cout << "cdf: " << cdf(myExponential2, x) << endl;


    cout.precision(2);

    cout << "\n***exponential distribution: \n";
    cout << "mean: " << mean(myExponential1) << endl;
    cout  << "variance: " << variance(myExponential1) << endl;
    cout << "median: " << median(myExponential1) << endl;
    cout << "mode: " << mode(myExponential1) << endl;
    cout << "kurtosis excess: " << kurtosis_excess(myExponential1) << endl;
    cout << "kurtosis: " << kurtosis(myExponential1) << endl;
    cout << "characteristic function: " << chf(myExponential1, x) << endl;
    cout << "hazard: " << hazard(myExponential1, x) << endl;

    poisson_distribution<double> myPoisson(3.0);

    double val = 13.0;
    cout << endl << "pdf: " << pdf(myPoisson, val) << endl;
    cout << "cdf: " << cdf(myPoisson, val) << endl;

    vector<double> pdfList;
    vector<double> cdfList;

    return 0;
}