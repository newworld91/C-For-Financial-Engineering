#include "point.hpp"

int main()
{
    Point points;
    points.SetX();
    points.SetY();
    cout << "X = "<< points.ToString(points.GetX()) << endl;
    cout << "Y = " << points.ToString(points.GetY()) << endl;

}