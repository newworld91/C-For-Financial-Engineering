//
// Created by Steve on 8/29/18.
//

#include "point.hpp"
Point::Point() : x(0.00), y(0.00) {}
Point::Point(double xval, double yval) : x(xval), y(yval) {}
Point::~Point()
{
    cout << "Deconstructed \n";
}
double Point::GetX() const
{
    return x;
}
double Point::GetY() const
{
    return y;
}
void Point::SetX()
{
    cout << "Type in a value for x: " << endl;
    cin >> x;
}
void Point::SetY()
{
    cout << "Type in a value for y: " << endl;
    cin >> y;
}

string Point::ToString(double val)
{
    stringstream ss;
    ss << val;
    return ss.str();
}

double Point::DistanceOrigin()
{
    return sqrt(pow(x,2)) + sqrt(pow(y,2));
}

double Point::Distance(Point p)
{
    return sqrt(pow(x-p.x,2)) + sqrt(pow(y-p.y,2));
}