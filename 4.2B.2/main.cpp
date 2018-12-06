#include "array.cpp"
#include "NumericArray.cpp"

using namespace std;

int main()
{
    NumericArray<int> array(3);
    NumericArray<int> array2(3);
    cout << array.DotProduct(array2) << endl;

}