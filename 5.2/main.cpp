#include <string>
#include <iostream>
#include <boost/tuple/tuple.hpp>
#include <boost/tuple/tuple_io.hpp>
using namespace std;
using boost::tuple;

typedef tuple<string,int, int> person;
void Print(person p)
{
    string name = p.get<0>();
    int age = p.get<1>();
    double length = p.get<2>();

    cout << "Name = " << name << "Age = " << age << "Length = "<< length << endl;
}
int main()
{
    person person1 = boost::make_tuple(string("Steve"),27, 5.7);
    person person2 = boost::make_tuple(string("Alex"), 24, 5.11);

    Print(person1);
    Print(person2);
}