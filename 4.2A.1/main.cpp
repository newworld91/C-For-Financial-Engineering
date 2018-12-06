#include "array.cpp"
#include "pointer.hpp"
using namespace std;

int main() {
    int size = 3;
    Array<Point> array(size);
    array[0] = Point(0.0,1.0);
    array[1] = Point(1.0, 2.0);
    array[2] = Point(3.0,4.0);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}