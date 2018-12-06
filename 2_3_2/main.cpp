#include <iostream>
#include "pointer.hpp"


int main()
{
    Point point(1, 1);
    Point p1(1,1);
    cout << "Distance from origin is: " << point.Distance(p1) << endl;
    point.SetX();

    return 0;
}