//
// Created by Steve on 11/13/18.
//

#include "visitor.hpp"


Visitor::Visitor() : boost::static_visitor<void>()
{
    m_dx = 0.0;
    m_dy = 0.0;
}

Visitor::Visitor(const Visitor& source) : boost::static_visitor<void>(source)
{
    m_dx = source.m_dx;
    m_dy = source.m_dy;
}

Visitor::Visitor(double x, double y) : boost::static_visitor<void>()
{
    m_dx = x;
    m_dy = y;
}

Visitor::~Visitor()
{
}

Visitor& Visitor::operator = (const Visitor& source)
{
    if (this == &source)
    {
        return *this;
    }

    Visitor::operator = (source);

    m_dx = source.m_dx;
    m_dy = source.m_dy;

    return *this;
}

void Visitor::operator () (Point& p) const
{
    p.X(p.X() + m_dx);
    p.Y(p.Y() + m_dy);
}

void Visitor::operator () (Line& l) const
{ // () operator for Line

    Point p1;
    p1 = l.P1();
    Point p2;
    p2 = l.P2();
    p1.X(p1.X() + m_dx);
    p1.Y(p1.Y() + m_dy);
    p2.X(p2.X() + m_dx);
    p2.Y(p2.Y() + m_dy);

    l.P1(p1);
    l.P2(p2);
}

void Visitor::operator () (Circle& c) const
{ // () operator for Circle

    Point center;
    center = c.CenterPoint();
    center.X(center.X() + m_dx);
    center.Y(center.Y() + m_dy);

    c.CenterPoint(center);
}