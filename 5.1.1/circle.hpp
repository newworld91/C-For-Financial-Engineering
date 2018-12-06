//
// Created by Steve on 11/12/18.
//

#ifndef INC_5_1_1_CIRCLE_HPP
#define INC_5_1_1_CIRCLE_HPP
#define _USE_MATH_DEFINES
#include "pointer.hpp"
#include <cmath>

class Circle : Shape
{
private:
    double m_radius;
    Point center;
public:
    Circle ();
    Circle (double m_radius, Point& p1);
    Circle (Circle& m);
    ~Circle();
    Point CenterPoint(Point& p1);
    void Radius(double& r);
    double Radius() const;
    double Diameter() const;
    double Area() const;
    double Circumference() const;
    string ToString();

    Circle &operator=(const Circle &source);

};
#endif //INC_5_1_1_CIRCLE_HPP
