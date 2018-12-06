//
// Created by Steve on 11/13/18.
//

#include "EuropeanOption.hpp"

EuropeanOption::EuropeanOption()
{
    r = 0.0;
    sig = 0.0;
    K = 0.0;
    T = 0.0;
    b = 0.0;
    S = 0.0;

};

EuropeanOption::EuropeanOption(double rate, double sigma, double k, double B, double s, double t)
{
    r = rate;
    sig = sigma;
    K = k;
    b = B;
    T = t;
    S = s;
}

EuropeanOption::EuropeanOption(const EuropeanOption& option)
{
    r = option.r;
    sig = option.sig;
    K = option.K;
    b = option.b;
    S = option.S;
    T = option.T;
}

EuropeanOption::~EuropeanOption(){}

double EuropeanOption::CallDelta()
{
    normal_distribution<> N(0.0,1.0);
    double d1 = (log(S/K) + (b + (pow(sig,2)) * 0.5) * T ) / (sig * sqrt(T));

    return exp((b-r)*T) * cdf(N,d1);
}

double EuropeanOption::PutDelta()
{
    normal_distribution<> N(0.0,1.0);
    double d1 = (log(S/K) + (b + (sig*sig)*0.5 ) * T)/(sig * sqrt(T));
    return exp((b-r)*T) * (cdf(N,d1) - 1.0);
}
double EuropeanOption::CallGamma()
{
    normal_distribution<> N(0.0,1.0);
    double d1 = (log(S/K) + (b + (sig*sig)*0.5 ) * T)/ (sig * sqrt(T));
    double d2 = d1 - (sig * sqrt(T));

    return (cdf(N,d1) * exp((b-r)*T) ) / (S * (sig * sqrt(T)));
}
double EuropeanOption::PutGamma()
{
    return CallGamma();
}

double EuropeanOption::CallVega()
{
    normal_distribution<> N(0, 1);
    double tmp = sig * sqrt(T);
    double d1 = (log(S / K) + (r + (sig * sig) * 0.5) * T) / (sig * sqrt(T));
    return S * sqrt(T) * exp((b - r) * T) * pdf(N, d1);
}

double EuropeanOption::PutVega()
{
    return CallVega();
}

double EuropeanOption::CallPrice()
{
    double temp = sig * sqrt(T);
    normal_distribution<> N(0.0,1.0);
    double d1 = ( log(S/K) + (r + pow(sig,2) * 0.5 ) * T )/ temp;
    double d2 = d1 - (sig * sqrt(T));

    return (cdf(N,d1) * S) - (K*exp(-r*T) * cdf(N,d2));
}

double EuropeanOption::PutPrice()
{
    double temp = sig * sqrt(T);
    normal_distribution<> N(0.0,1.0);
    double d1 = ( log(S/K) + (r + (pow(sig,2))*0.5 ) * T )/ temp;
    double d2 = d1 - (sig * sqrt(T));
    return (K*exp(-r*T) * cdf(N,-d2)) - (cdf(N,-d1) * S);
}

double EuropeanOption::PutCall(string optiontype)
{
    if (optiontype == "c" || optiontype == "call" || optiontype == "Call")
    {
        return PutPrice() + S - (K * exp(-r * T));
    }
    else if (optiontype == "put" || optiontype == "p" || optiontype == "Put")
    {
        return CallPrice() + (K * exp(-r * T)) + S;
    }
    else
    {
        return printf("Choose C, Call, call, put, p, or Put");
    }
}

EuropeanOption& EuropeanOption::operator= (EuropeanOption& source) {
    if (this == &source) { return *this;};

    r = source.r;
    sig = source.sig;
    K = source.K;
    T = source.T;
    b = source.b;
    S = source.S;

    return *this;

}



