//
// Created by Steve on 10/31/18.
//

#ifndef INC_3_4_1_POINTER_HPP
#define INC_3_4_1_POINTER_HPP
#include "pointer.hpp"
#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;
class Point {
private:
    double x;
    double y;

public:
    Point();

    Point(double xval, double yval);

    Point(Point &p);

    virtual ~Point();

    string ToString();

    double X() const;

    double Y() const;

    void Y(double &yval);

    void X(double &xval);

    double Distance();

    double Distance(const Point &p);

    Point Point::operator-() const;

    Point Point::operator*(double factor) const;

    Point Point::operator+(const Point &p) const;

    bool operator==(const Point &p);

    Point &operator=(const Point &source);

    Point &operator*=(double factor);

    friend ostream& operator << (ostream& os, Point& point);

};

#endif //INC_3_4_1_POINTER_HPP
