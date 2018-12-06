//
// Created by Steve on 10/26/18.
//

#ifndef INC_2_5_3_POINTER_HPP
#define INC_2_5_3_POINTER_HPP

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

    ~Point();

    ostream &operator<<(ostream &os, Point &point);
};

#endif //INC_2_5_3_POINTER_HPP
