#include <iostream>
#include "pointer.hpp"

int main() {
    Point* p1 = new Point();
    Point* p2 = new Point(1, 1);
    Point* p3 = new Point(*p2);

    cout << *p1 << ", " << *p2 << ", " << *p3 << endl;

    cout << "The distance between " << *p3 << " and " << *p1
         << " is " << (*p3).Distance(*p1) << endl;

    delete p1;
    delete p2;
    delete p3;

    int size;

    cin >> size;


    Point* pp = new Point[size];
}