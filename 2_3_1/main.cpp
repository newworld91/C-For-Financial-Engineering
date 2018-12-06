#include <iostream>
#include "pointer.hpp"

int main()
{

    Point point(2.0, 3.0);
    cout << "Distance from origin is: " << point.ToString(point.DistanceOrigin()) << endl;
}