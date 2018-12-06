#include <boost/shared_ptr.hpp>
#include "pointer.hpp"
#include "circle.hpp"
#include "array.cpp"
#include "PointArray.cpp"
#include "shape.hpp"
#include "line.cpp"

#include <iostream>


using namespace std;

int main()
{
    typedef boost::shared_ptr<Shape> ShapePtr;
    typedef Array<ShapePtr> ShapeArray;
    const int size = 4;
    ShapePtr pshape(new Point(2.0, 3.0));
    ShapePtr lshape(new Line(Point(0.0,0.0), Point(2.0,2.0)));
    ShapePtr lshape2(new Line(Point(1.0,2.0), Point(3.0,2.0)));
    ShapePtr pshape2(new Point(4.0,5.0));

    {
        ShapeArray array_shape(size);
        array_shape[0] = pshape;
        array_shape[1] = lshape;
        array_shape[2] = lshape2;
        array_shape[3] = pshape2;

        for (int i = 0; i < size; i++)
        {
            cout << array_shape[i]->ToString() << endl;
        }
        cout << pshape.use_count() << endl;
        cout << lshape.use_count() << endl;
        cout << lshape2.use_count() << endl;
        cout << pshape2.use_count() << endl;

    }

}

