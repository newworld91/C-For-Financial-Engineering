#ifndef point_HPP
#define  point_HPP

#include "point.hpp"
#include <iostream>
#include <sstream>

using namespace std;

class Point
{
private:
    double x;
    double y;

public:
    Point();
    double GetX() const;
    double GetY() const;
    void SetY();
    void SetX();
    string ToString(double val);
    ~Point();

};

#endif

