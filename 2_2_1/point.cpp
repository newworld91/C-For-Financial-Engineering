#include "point.hpp"


Point::Point() : x(0.00), y(0.00) {}
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
    cout << "Type in a value for y: \n" << endl;
    cin >> y;
}

string Point::ToString(double val)
{
    stringstream ss;
    ss << val;
    return ss.str();
}


