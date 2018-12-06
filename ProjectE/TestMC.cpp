#include "OptionData.hpp"
#include <vector>
#include <cmath>
#include <iostream>
#include "UtilitiesDJD/ExcelDriver/ExcelDriverLite.hpp"
//I do not have excel, but I tried to do the exercise to the best of my ability.
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


int main()
{
    double start = 10.0;
    double end = 50.0;
    int num = 10;
    OptionData option;

    option.r = 0.01;
    option.K = 100;
    option.T = 1.0;
    option.sig = 0.20;
    option.type = 'call';

    vector<double> S = GenerateMeshArray(start,end, num);
    vector<double> Price;
    
    int size = S.size();

    for (int i = 0; i < size; i++)
    {
        Price.push_back(option.myPayOffFunction(S[i]));

    };
    try
    {
        printOneExcel(S, Price, string("Option Prices in Excel"), string("Underlying Value"), string("Option Price"));
    } catch (DatasimException& e){
        e.print();
    }
    return 0;
}


// Created by Steve on 11/27/18.
//

