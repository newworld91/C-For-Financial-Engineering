//
// Created by Steve on 9/12/18.
//





#include "pointer.hpp"


Point::Point() : x(0.00), y(0.00)
{
    cout << "Constructed!" << endl;
}
Point::Point(double xval, double  yval) : x(xval), y(yval)
{
    cout << "Constructed!" << endl;
}
Point::Point(Point &p)
{
    x = p.x;
    y = p.y;
}
Point::~Point()
{
    cout << "Deconstructed \n";
}
double Point::X() const
{
    return x;
}
double Point::Y() const
{
    return y;
}
void Point::X(double& xval)
{
    x = xval;
}
void Point::Y(double& yval)
{
    y = yval;
}
string Point::ToString()
{
    stringstream stream;

    stream << "Point(" << x << "," << y << ")";

    return stream.str();
}


double Point::Distance()
{
    return sqrt(pow(x,2)) + sqrt(pow(y,2));
}

double Point::Distance(const Point& p)
{
    return sqrt(pow(x-p.x,2)) + sqrt(pow(y-p.y,2));
}



