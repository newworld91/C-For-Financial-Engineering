//
// Created by Steve on 11/1/18.
//

#ifndef INC_3_5_2_POINTER_HPP
#define INC_3_5_2_POINTER_HPP
#include "shape.hpp"
#include <sstream>
#include <iostream>
#include <cmath>

class Point : public Shape
{
private:
    double x;
    double y;
public:
    Point();
    Point(double m_x, double m_y);
    Point(Point& p);
    virtual ~Point();
    Point& operator = (const Point& p);
    string ToString() const;
    double Distance(const Point& p) const;
    friend ostream& operator << (ostream& os, const Point& p);
    double X() const;
    void X(double newX);
    double Y() const;
    void Y(double newY);

};
#endif //INC_3_5_2_POINTER_HPP
