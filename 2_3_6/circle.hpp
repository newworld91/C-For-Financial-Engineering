//
// Created by Steve on 9/12/18.
//

#ifndef INC_2_3_6_CIRCLE_HPP
#define INC_2_3_6_CIRCLE_HPP
#define _USE_MATH_DEFINES
#include "pointer.hpp"

#include <cmath>

class Circle
{
private:
    double m_radius;
    Point center;
public:
    Circle ();
    Circle (double m_radius, Point& p1);
    Circle (const Circle &m);
    ~Circle();
    Point CenterPoint(Point& p1);
    void Radius(double& r);
    double Radius() const;
    double Diameter() const;
    double Area() const;
    double Circumference() const;
    string ToString();

};



#endif //INC_2_3_6_CIRCLE_HPP
