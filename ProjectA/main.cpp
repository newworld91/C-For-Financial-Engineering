#include <iostream>
#include "EuropeanOption.hpp"

vector<double> GenerateMeshArray(double begin, double end, int n)
{
    vector<double> vec;
    double h = (end - begin) / (n - 1);
    for (int i = 0; i < n; i++)
    {
        vec.push_back(begin + h * i);
    }

    return vec;
}




int main() {

    EuropeanOption batch1(0.08, 0.30,65.0,0,60.0,0.25);
    cout << "Call Price Batch 1 = "<< batch1.CallPrice() << endl;
    cout << "Put Price Batch 1 = " << batch1.PutPrice() << endl;

    EuropeanOption batch2(0.0, 0.2, 100, 0, 100, 1.0);
    cout << "Call Price Batch 2 = "<< batch1.CallPrice() << endl;
    cout << "Put Price Batch 2 = " << batch1.PutPrice() << endl;

    EuropeanOption batch3(0.12, 0.5, 10,0,5,1.0);
    cout << "Call Price Batch 3 = "<< batch1.CallPrice() << endl;
    cout << "Put Price Batch 3 = " << batch1.PutPrice() << endl;

    EuropeanOption batch4(0.08,0.30,100.0,0,100.0,30.0);
    cout << "Call Price Batch 4 = "<< batch1.CallPrice() << endl;
    cout << "Put Price Batch 4 = " << batch1.PutPrice() << endl;

    EuropeanOption option2(0.1,0.36,100,0,105,0.5);
    cout << "Call Gamma = " << option2.CallGamma() << " Call Delta " << option2.CallDelta() << endl;
    cout << "Put Gamma = " << option2.PutGamma() << " Put Delta " << option2.PutDelta() << endl;


    vector<double> array1 = GenerateMeshArray(0,100, 100);
    int size = array1.size();

    for (int i = 0; i < size; i++)
    {
        EuropeanOption option(0.02, 0.3, 30, 0, array1[i], 1);
        cout << "Call price is = "  << option.CallPrice() << endl;
        cout << "Put price is = " << option.PutPrice() << endl;
    }

    vector<double> array2 = GenerateMeshArray(0,1, 4);
    int size_vol = array2.size();
    for (int i = 0; i < size_vol; i++)
    {
        EuropeanOption option(0.02, array2[i], 30, 0, 50, 1);
        cout << "Call Volatility is = " <<  option.CallPrice() << endl;
        cout << "Put Volatility is = " << option.PutPrice() << endl;
    }

    vector<double> array3 = GenerateMeshArray(0,4, 10);
    int size_time = array3.size();
    for (int i = 0; i < size_time; i++)
    {
        EuropeanOption option(0.02, 0.3, 30, 0, 50, array3[i]);
        cout << "Call Time to expiration = " <<  option.CallPrice() << endl;
        cout << "Put Time to expiration is = " <<  option.PutPrice() << endl;
    }

    vector<double> array4 = GenerateMeshArray(0,100, 100);
    int size_gamma = array4.size();

    for (int i = 0; i < size_gamma; i++)
    {
        EuropeanOption option(0.02, 0.3, 30, 0, array1[i], 1);
        cout << "Call Gamma = " << option.CallGamma() << " Call Delta = " << option.CallDelta() << endl;
        cout << "Put Gamma = " << option.PutGamma() << " Put Delta = " << option.PutDelta() << endl;
    }

    vector<double> array5 = GenerateMeshArray(0,100, 100);
    int size_corr = array5.size();

    for (int i = 0; i < size_corr; i++)
    {
        EuropeanOption option(0.02, 0.3, 30, 0, array1[i], 1);
        EuropeanOption option1(0.02, 0.3, 30, 0, array1[i+1], 1);
        EuropeanOption option2(0.02, 0.3, 30, 0, array1[i-1], 1);

        double delta_corr = (option1.CallDelta() - option2.CallDelta())/(2*i);
        double gamma_corr = (option1.CallGamma() - 2 * option.CallGamma() + option2.CallGamma())/ pow(i,2);

        cout << "Call Delta Correction " << delta_corr << endl;
        cout << "Call Gamma Correction " << gamma_corr << endl;
    }
}