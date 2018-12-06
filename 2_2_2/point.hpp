//
// Created by Steve on 8/29/18.
//

#ifndef point_HPP
#define  point_HPP

#include "point.hpp"
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
    Point(double xval, double yval);
    double GetX() const;
    double GetY() const;
    void SetY();
    void SetX();
    string ToString(double val);
    double DistanceOrigin();
    double Distance(Point p);
    ~Point();

};

#endif

