//
// Created by Steve on 11/21/18.
//

#include "AmericanOptions.hpp"

AmericanOptions::AmericanOptions()
{
    K = 0.0;
    S = 0.0;
    b = 0.0;
    sig = 0.0;
    r = 0.0;
}

AmericanOptions::AmericanOptions(double k, double s, double B, double SIG, double R)
{
    K = k;
    S = s;
    b = B;
    sig = SIG;
    r = R;
}

AmericanOptions::AmericanOptions(AmericanOptions& source)
{
    K = source.K;
    S = source.S;
    b = source.b;
    sig = source.sig;
    r = source.r;
}

AmericanOptions& AmericanOptions::operator = (AmericanOptions& source)
{
    if(this == &source)
    {
        return *this;
    }
    K = source.K;
    S = source.S;
    b = source.b;
    sig = source.sig;
    r = source.r;


    return *this;
}

double AmericanOptions::y1()
{
    return 0.5-(b/pow(sig,2)) + sqrt(pow((b/pow(sig,2))-0.5,2)+(2*r)/pow(sig,2));
}

double AmericanOptions::y2()
{
    return 0.5-(b/pow(sig,2))-sqrt(pow((b/pow(sig,2)-0.5),2)+((2*r)/pow(sig,2)));

}

double AmericanOptions::AmericanCallPrice()
{
    return (K/(y1()-1)) * pow((S*(y1()-1))/(K*y1()),y1());
}

double AmericanOptions::AmericanPutPrice()
{
    return (K/(1-y2()))*pow((S*(y2()-1))/(y2()*K),y2());
}