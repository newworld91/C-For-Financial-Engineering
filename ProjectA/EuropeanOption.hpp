//
// Created by Steve on 11/13/18.
//

#ifndef PROJECTA_EUROPEANOPTION_HPP
#define PROJECTA_EUROPEANOPTION_HPP
#include <string>
#include <sstream>
#include <boost/math/distributions/normal.hpp>
#include <boost/math/distributions.hpp>
#include <math.h>
#include <iostream>
using namespace boost::math;
using namespace std;

class EuropeanOption
{
private:
    double r;
    double sig;
    double K;
    double T;
    double b;
    double S;

public:
    EuropeanOption();
    EuropeanOption(double rate, double sigma, double k, double B, double s, double t);
    EuropeanOption(const EuropeanOption& option);
    virtual ~EuropeanOption();
    double CallDelta();
    double PutDelta();
    double CallGamma();
    double PutGamma();
    double CallVega();
    double PutVega();
    double CallPrice();
    double PutPrice();
    double PutCall(string optiontype);
    EuropeanOption& operator = (EuropeanOption& source);




};

#endif //PROJECTA_EUROPEANOPTION_HPP
