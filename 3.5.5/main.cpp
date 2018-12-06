#include "line.hpp"
#include "shape.hpp"
#include "pointer.hpp"

int main()
{
    Point p(1.0,2.0);
    Line l(Point(2.0,3.0),Point(4.0,5.0));
    l.Print();
    p.Print();
}