#include <iostream>
#include "EuropeanOption.hpp"
#include "AmericanOptions.hpp"

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

    AmericanOptions option(100,110,0.02,0.1,0.1);
    cout << "Call Price = " << option.AmericanCallPrice() << endl;
    cout << "Put Price = " << option.AmericanPutPrice() << endl;

    vector<double> array = GenerateMeshArray(1,100, 100);
    int size = array.size();

    for (int i = 0; i < size; i++)
    {
        AmericanOptions option(100,array[i],0.02,0.1,0.1);;
        cout << "S = " << array[i] << " Call price is = "  << option.AmericanCallPrice() << endl;
        cout << "S = " << array[i] << " Put price is = " << option.AmericanPutPrice() << endl;
    }


}