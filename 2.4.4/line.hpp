//
// Created by Steve on 10/25/18.
//

#ifndef INC_2_4_4_LINE_HPP
#define INC_2_4_4_LINE_HPP

#include "pointer.hpp"
#include <iostream>
#include <cmath>
using namespace std;

class LineSegment {
private:

    Point startPoint;
    Point endPoint;

public:

    // Constructors
    LineSegment();

    LineSegment(Point &p1, Point &p2);

    LineSegment(LineSegment &l);

    ~LineSegment();

    // Accesssing functions
    Point p1() const;

    Point p2() const;

    // Modifiers
    void p1(Point &pt);

    void p2(Point &pt);

    double LineLength();

    string ToString();

    LineSegment &operator=(const LineSegment &source);

    friend ostream &operator<<(ostream &os, LineSegment &line);
};

#endif //INC_2_4_4_LINE_HPP
