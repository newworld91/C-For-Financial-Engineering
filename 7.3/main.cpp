#include <iostream>
#include "functinobject.cpp"

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int LessThanLimit(double input)
{
    const double limit = 5.0;
    return input < limit;
}

int main()
{

    vector<double> vector1;
    for (int i = 0; i < 10; i++)
    {
        vector1.push_back(i + 0.1);
    }

    // Using the global function to get the number of elements less than a certain value.
    int result1 = count_if(vector1.begin(), vector1.end(), LessThanLimit);
    cout << "The number of elements that are less than 5 is " << result1 << endl;

    double limit = 5;
    int result2 = count_if(vector1.begin(), vector1.end(), FunctionObject<double>(limit));
    cout << "The number of elements that are less than " << limit << " is " << result2 << endl;
}



