#include <iostream>
#include <list>
#include <vector>
#include <map>

using namespace std;
int main()
{
    list<double> list1;
    list1.push_back(2.0);
    list1.push_back(1.0);
    list1.push_back(0.5);
    list1.push_back(0.25);

    cout << "front = "<< list1.front() << endl;
    cout << "back = " << list1.back() << endl;

    vector<double> v;
    v.reserve(4);
    v.push_back(2.0);
    v.push_back(1.0);
    v.push_back(0.5);
    v.push_back(0.25);

    for (int i = 0; i != 4; i++)
    {
        cout << v[i] << endl;
    }

    map<string,double> m;
    string str[4] = {"Steve", "Alex", "Diane", "Steve Sr."};
    m[str[0]] = 27;
    m[str[1]] = 24;
    m[str[2]] = 55;
    m[str[3]] = 57;

    for (int i = 0; i != 4; i++)
    {
        cout << m[str[i]] << endl;
    }

}