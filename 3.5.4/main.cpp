#include "line.hpp"
#include "shape.hpp"
#include "pointer.hpp"

int main() {
    Shape* shapes[3];
    shapes[0] = new Line(Point(2.0,2.0), Point(3.0,3.0));
    shapes[1] = new Point(1.0,1.0);
    shapes[2] = new Line(Point(5.0,5.0), Point(4.0,4.0));
    shapes[3] = new Point(2.0,2.0);

    for (int i = 0; i != 4; i++)
    {
        shapes[i]->Draw();
    }

    for (int i = 0; i != 4; i++)
    {
        delete shapes[i];
    }
}