//
// Created by Steve on 11/12/18.
//

#ifndef INC_5_1_1_LINE_HPP
#define INC_5_1_1_LINE_HPP

#include "pointer.hpp"

class Line : public Shape {
private:
    Point p1;
    Point p2;
public:
    Line();

    Line(const Point &point1, const Point &point2);

    Line(Line &l);

    virtual~Line();

    Line &operator=(const Line &l);

    string ToString() const;

    Point P1() const;
    void P1(const Point& newP1);
    Point P2() const;
    void P2(const Point& newP2);
};

#endif //INC_5_1_1_LINE_HPP
