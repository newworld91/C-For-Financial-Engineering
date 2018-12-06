#include "array.cpp"
#include "NumericArray.cpp"
#include "PointArray.hpp"

using namespace std;

int main()
{
    PointArray parray(3);
    for (int i = 0; i < parray.Size(); i++)
    {
        parray[i] = Point(i,i+1);
        cout << parray[i] << endl;
    }

    cout << parray.Length() << endl;

}