//
// Created by Steve on 11/1/18.
//

#ifndef INC_3_5_2_POINTER_HPP
#define INC_3_5_2_POINTER_HPP
#include "shape.hpp"

class Point : public Shape
{
private:
    double x;
    double y;
public:
    Point();
    Point(double m_x, double m_y);
    Point(Point& p);
    virtual ~Point();
    Point& operator = (const Point& p);
    string ToString() const;
    void Draw();

};
#endif //INC_3_5_2_POINTER_HPP
