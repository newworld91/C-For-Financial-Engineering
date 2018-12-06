#include "point.hpp"

int main()
{
    Point point;
    int xval = 4;
    int yval= 4;
    point.SetX();
    point.SetY();
    cout << "Distance from (" << xval <<","<< yval <<"): "<< point.ToString(point.Distance(4,4)) << endl;
    cout << "Distance from origin is: " << point.ToString(point.DistanceOrigin()) << endl;
}