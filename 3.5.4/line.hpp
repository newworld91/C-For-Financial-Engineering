//
// Created by Steve on 11/1/18.
//

#ifndef INC_3_5_2_LINE_HPP
#define INC_3_5_2_LINE_HPP

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

    void Draw();
};
#endif //INC_3_5_2_LINE_HPP
