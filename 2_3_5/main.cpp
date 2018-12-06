#include "linesegment.hpp"
#include "pointer.hpp"
#include <iostream>

using namespace std;


int main()
{
    // Create a point
    Point p1;

    double d = p1.X();

    cout << d << endl;

    Point p2(1.0,2.0);
    cout << "(" << p2.X() << "," << p2.Y() << ")" << endl;

    LineSegment L1(p1, p2);

    cout << "Line length: "<< L1.ToString() << endl;

    // Linesegment
//	LineSegment L1(p1, p2);

    return 0;
}