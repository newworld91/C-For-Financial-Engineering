//
// Created by Steve on 11/12/18.
//

#include "circle.hpp"
Circle::Circle() : Shape(){
    m_radius = 0.0;
    center = Point(0.0,1.0);
};
Circle::Circle(double radius, Point& p1) : Shape()
{
    m_radius = radius;
    center = p1;
};
Circle::Circle(Circle& m) : Shape(m)
{
    m_radius = m.m_radius;
    center = m.center;
};

Circle::~Circle(){};

void Circle::Radius(double& r)
{
    m_radius = r;
};
double Circle::Radius() const
{
    return m_radius;
};

double Circle::Diameter() const
{
    return 2 * m_radius;
}

double Circle::Area() const
{
    return M_PI * pow(m_radius,2);
}

double Circle::Circumference() const
{
    return 2 * M_PI * m_radius;
}

Point Circle::CenterPoint(Point& p1)
{
    center = p1;
    return center;
}

string Circle::ToString()
{
    stringstream stream;

    stream << "Center(" << center.ToString() << ")";

    return stream.str();
}


Circle& Circle::operator = (const Circle& source)
{
    if (this == &source) {
        return *this;
    }

    center = source.center;
    m_radius = source.m_radius;
}