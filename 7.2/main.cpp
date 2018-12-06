#include <list>
#include <vector>
#include <map>
#include <iostream>
#include <string>
using namespace std;

template <typename T>
double Sum(const T& t)
{
    typename T::const_iterator i;
    double sum = 0.0;
    for (i = t.begin(); i != t.end(); ++i)
    {
        sum += *i;
    }
    return sum;
}

template <typename t1, typename t2>
double Sum(const map<t1,t2>& t)
{
    typename map<t1,t2>::const_iterator i;
    double sum = 0.0;
    for (i = t.begin(); i != t.end(); ++i)
    {
        sum += (i->second);
    }
    return sum;
}

template <typename T>
double Sum(const typename T::const_iterator& s, const typename T::const_iterator& e)
{
    typename T::const_iterator i;
    double sum = 0.0;
    for (i = s; i != e; ++i)
    {
        sum += *i;
    }
    return sum;
}

template <typename t1, typename t2>
double Sum(const typename map<t1,t2>::const_iterator& s, const typename map<t1,t2>::const_iterator& e)
{
    typename map<t1,t2>::const_iterator i;
    double sum = 0.0;
    for (i = s; i != e; ++i)
    {
        sum += (*i).second;
    }
    return sum;
};

int main()
{
    list<double> l1;
    for (int i = 0; i < 5; ++i)
    {
        l1.push_back(i + 0.5);
    }

    cout << Sum(l1) << endl;
    cout << Sum<list<double>>(++l1.begin(), --l1.end()) << endl;

    vector<double> v1;
    for (int i = 0; i < 5; ++i)
    {
        v1.push_back(i + 0.5);
    }
    cout << Sum(v1) << endl;
    cout << Sum<vector<double>>(++v1.begin(), --v1.end()) << endl;

    map<string, double> m;
    string str[5] = {"1","2","3","4","5"};
    for (int i = 0; i < 5; ++i)
    {
        m[str[i]] = i + 0.5;
    }
    cout << Sum(m) << endl;
    cout << Sum<string, double>(++m.begin(), --m.end()) << endl;

};