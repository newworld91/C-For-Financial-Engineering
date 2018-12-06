//
// Created by Steve on 9/3/18.
//

#ifndef INC_2_5_1_LINESEGMENT_HPP
#define INC_2_5_1_LINESEGMENT_HPP
#include "pointer.hpp"
#include <iostream>
#include <cmath>
using namespace std;

class LineSegment
{
private:

    Point startPoint;
    Point endPoint;

public:

    // Constructors
    LineSegment();
    LineSegment(Point& p1,Point& p2);
    LineSegment(LineSegment& l);
    ~LineSegment();

    // Accesssing functions
    Point p1() const;
    Point p2() const;

    // Modifiers
    void p1(Point& pt);
    void p2(Point& pt);
    double LineLength();
    string ToString();


};


#endif //INC_2_5_1_LINESEGMENT_HPP
