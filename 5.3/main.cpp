#include <boost/variant.hpp>
#include "pointer.hpp"
#include "line.hpp"
#include "circle.hpp"
#include "visitor.hpp"
#include <string>
#include <iostream>
using namespace std;

typedef boost::variant<Point, Line, Circle> ShapeType;

ShapeType Create()
{
    ShapeType shape;

    cout << "Please choose the shape" << endl;
    char choice;
    cin >> choice;

    switch (choice)
    {
        case 'p':
            shape = Point();
            break;
        case 'l':
            shape = Line();
            break;
        case 'c':
            shape = Circle();
            break;
        default:
            break;
    }

    return shape;
}

int main()
{
    using boost::variant;

    ShapeType result = Create();
    cout << result << endl;

    try
    {
        Line l1 = boost::get<Line>(result);
    }
    catch (boost::bad_get& err)
    {
        cout << "Error: " << err.what() << endl;
    }

    Visitor visitor(1.0, 2.0);
    boost::apply_visitor(visitor, result);
    cout << result << endl;

}

