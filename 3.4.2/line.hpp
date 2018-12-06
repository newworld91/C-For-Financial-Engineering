//
// Created by Steve on 10/31/18.
//

#ifndef INC_3_4_2_LINE_HPP
#define INC_3_4_2_LINE_HPP
#include "pointer.hpp"

class Line : public Shape
{
private:
    Point p1;
    Point p2;
public:
    Line();
    Line(const Point& point1, const Point& point2);
    Line(Line& l);
    virtual ~Line();
    Line& operator = (const Line& l);
    string ToString() const;

};


#endif //INC_3_4_2_LINE_HPP
