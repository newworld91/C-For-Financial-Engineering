//
// Created by Steve on 10/17/18.
//

#ifndef INC_2_3_7_POINTER_HPP
#define INC_2_3_7_POINTER_HPP

#include <iostream>
#include <cmath>
#include <sstream>
#include <string>

using namespace std;



class Point
{
private:
    double x;
    double y;

public:

    inline Point(): x(0.0), y(0.0) // Colon syntax!!!!!!!!!!!!!!!!!
    {
        cout << "Constructing" << endl;
    };
    inline Point(double xval, double yval) : x(xval), y(yval)
    {
    } ;
    inline Point(Point &p) {x = p.x; y = p.y;};

    inline  ~Point() { cout << "Deconstructing" << endl;};
    inline double X() const
    {
        return x;
    };
    inline void X(double& xval)
    {
        x = xval;
    };
    inline double Y() const
    {
        return y;
    };
    inline void Y(double& yval)
    {
        y = yval;
    };
    inline string ToString()
    {
        stringstream stream;

        stream << "Point(" << x << "," << y << ")";

        return stream.str();
    };
    inline double Distance()
    {
        return sqrt(pow(x,2)) + sqrt(pow(y,2));
    };
    inline double Distance(Point& p)
    {
        return sqrt(pow(x-p.x,2)) + sqrt(pow(y-p.y,2));
    };
};

#endif //INC_2_3_7_POINTER_HPP
