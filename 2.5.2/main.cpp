#include <iostream>
#include "pointer.hpp"

int main()
{
    const int size = 3;

    Point** array_pp = new Point*[size];


    array_pp[0] = new Point(0.0, 0.0);
    array_pp[1] = new Point(1.0, 1.0);
    array_pp[2] = new Point(2.0, 2.0);


    for (int i = 0; i < 3; i++)
    {
        cout << *array_pp[i] << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        delete array_pp[i];
    }


    delete[] array_pp;
}