//
// Created by Steve on 11/1/18.
//

#include "line.hpp"

Line::Line() : Shape()
{
    p1 = Point(0.0,0.0);
    p2 = Point(0.0,0.0);
}
Line::Line(const Point& point1, const Point& point2) : Shape()
{
    p1 = point1;
    p2 = point2;
}
Line::Line(Line& l) : Shape(l)
{
    p1 = l.p1;
    p2 = l.p2;
}
Line::~Line(){cout << "Deconstructing Line" << endl;};
Line& Line::operator=(const Line &l)
{
    if (this == &l)
    {
        return *this;
    }
    p1 = l.p1;
    p2 = l.p2;
    return *this;
}
string Line::ToString() const
{
    stringstream stream;
    stream << "Line = "<< p1.ToString() << " & " << p2.ToString();
    return stream.str();
}
void Line::Draw() {cout <<"___________";}
