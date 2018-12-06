//
// Created by Steve on 10/31/18.
//

#include "pointer.hpp"

Point::Point() : Shape()
{
    x = 0.00;
    y = 0.00;
}
Point::Point(double m_x, double m_y) : Shape()
{
    x = m_x;
    y = m_y;
}
Point::Point(Point& p) : Shape(p)
{
    x = p.x;
    y = p.y;
}
Point::~Point(){}
Point& Point::operator=(const Point &p)
{
    if (this == &p)
    {
        return *this;
    }
    x = p.x;
    y = p.y;
    return *this;
}

string Point::ToString() const
{
    stringstream stream;
    stream << "Point: (" << x << "," << y << ") ";
    return stream.str();
}

