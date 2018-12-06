//
// Created by Steve on 9/4/18.
//


#ifndef INC_2_5_1_POINTER_HPP
#define INC_2_5_1_POINTER_HPP

#include "pointer.hpp"
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

class Point
{
private:
    double x;
    double y;

public:
    Point();
    Point(double xval, double  yval);
    Point(Point &p);
    string ToString();
    double X() const;
    double Y() const;
    void Y(double& yval);
    void X(double& xval);
    double Distance();
    double Distance(const Point& p);
    ~Point();

};


#endif //INC_2_5_1_POINTER_HPP
