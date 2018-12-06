//
// Created by Steve on 11/21/18.
//

#ifndef PROJECTB_AMERICANOPTIONS_HPP
#define PROJECTB_AMERICANOPTIONS_HPP
#include <math.h>
#include <iostream>
using namespace std;

class AmericanOptions
{
private:
    double K;
    double S;
    double b;
    double sig;
    double r;
public:
    AmericanOptions();
    AmericanOptions(double k, double s, double B, double SIG, double R);
    AmericanOptions(AmericanOptions& source);
    AmericanOptions& operator = (AmericanOptions& source);
    double y1();
    double y2();
    double AmericanCallPrice();
    double AmericanPutPrice();
};

#endif //PROJECTB_AMERICANOPTIONS_HPP
