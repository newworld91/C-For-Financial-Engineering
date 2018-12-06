//
// Created by Steve on 10/24/18.
//

#ifndef INC_2_4_2_CIRCLE_HPP
#define INC_2_4_2_CIRCLE_HPP


#include "pointer.hpp"
#include <cmath>
#define _USE_MATH_DEFINES

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

    Circle &operator=(const Circle &source);
    ostream& operator << (ostream& os,  Circle& point);

};
#endif //INC_2_4_2_CIRCLE_HPP
