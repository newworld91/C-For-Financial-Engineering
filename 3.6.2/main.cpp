#include "array.hpp"
#include "shape.hpp"
#include "pointer.hpp"
#
using namespace std;

int main()
{
    int index = 3;
    Array array(index);
    try
    {
        cout << array[3] << endl;
    }
    catch (ArrayException& er)
    {
        cout << er.GetMessage()<< endl;
    }
}