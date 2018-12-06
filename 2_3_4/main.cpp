#include <iostream>
#include "pointer.hpp"


int main()
{
    const Point point (2.0, 3.0);
    cout << "Distance from origin is: " << point.ToString(point.Distance(3.0,2.0)) << endl;
    return 0;
}