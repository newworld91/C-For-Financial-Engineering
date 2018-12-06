#include "line.hpp"
#include "shape.hpp"
#include "pointer.hpp"

int main() {
    Shape* shapes[3];
    shapes[0] = new Shape;
    shapes[1] = new Point;
    shapes[2] = new Line;

    for(int i = 0; i != 3; i++) delete shapes[i];

    // If not declaring Shape destructor as virtual,
    // Point destructor called : 2
    // Shape destructor  called : 5


    // When declaring Shape destructor as virtual,
    // Point: 5
    // Line: 1
    // Shape:7
}