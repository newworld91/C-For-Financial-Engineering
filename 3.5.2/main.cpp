#include "line.hpp"

int main() {
    Shape* s;
    Point p(10.0, 20.0);
    s = &p;
    Line l(Point(1,2), Point(3, 4));
    cout<<s->ToString()<<endl;
    cout<<p.ToString()<<endl;
    cout<<l.ToString()<<endl;
    cout<<"Shape ID: "<<s->ID()<<endl;
    cout<<"Point ID: "<<p.ID()<<endl;
    cout<<"Line ID: "<<l.ID()<<endl;
    Shape* sp;
    sp=&p;
    cout<<sp->ToString()<<endl;

    Point p2;
    p2=p;
    cout<< p2.ToString() <<", "<<p2.ID()<<endl;
}