//
// Created by Steve on 9/4/18.
//
#include "linesegment.hpp"

LineSegment::LineSegment() : startPoint(0,0), endPoint(0,0)
{

}

LineSegment::LineSegment(Point& p1, Point& p2) : startPoint(p1) , startPoint(p2)
{
}


LineSegment::LineSegment(LineSegment& l) : startPoint(l.startPoint), endPoint(l.endPoint)
{

}

LineSegment::~LineSegment()
{

}

Point LineSegment::p1() const
{
    return startPoint;
}

Point LineSegment::p2() const
{
    return endPoint;
}

void LineSegment::p1(Point& pt)
{
    startPoint=pt;
}

void LineSegment::p2(Point& pt)
{
    endPoint=pt;
}

double LineSegment::LineLength()
{
    return startPoint.Distance(endPoint);
}

string LineSegment::ToString()
{
    stringstream stream;

    stream << "Line(" << startPoint.ToString() << "," << endPoint.ToString() << ")";

    return stream.str();
}