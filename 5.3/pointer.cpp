//
// Created by Steve on 11/1/18.
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
Point::~Point(){cout << "Deconstructing Point" << endl;}
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

ostream& operator << (ostream& os, const Point& p)
{
    os<<"Point("<<p.x<<","<<p.y<<")";
    return os;
}

double Point::Distance(const Point& p) const
{
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}
double Point::X() const
{
    return x;
}

void Point::X(double newX)
{
    x = newX;
}


double Point::Y() const
{
    return y;
}

void Point::Y(double newY)
{
    y = newY;
}