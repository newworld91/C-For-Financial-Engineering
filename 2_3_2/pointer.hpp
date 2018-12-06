//
// Created by Steve on 8/30/18.
//

#ifndef INC_2_3_2_POINTER_HPP
#define INC_2_3_2_POINTER_HPP
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
    Point(double xval, double yval);
    string ToString();
    double GetX() const;
    double GetY() const;
    void SetY();
    void SetX();
    double DistanceOrigin();
    double Distance(const Point& p);
    ~Point();

};

#endif //INC_2_3_2_POINTER_HPP
