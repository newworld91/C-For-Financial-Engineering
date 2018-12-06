//
// Created by Steve on 11/1/18.
//

#ifndef INC_3_5_1_SHAPE_HPP
#define INC_3_5_1_SHAPE_HPP
#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Shape
{
private:
    int m_id;
public:
    Shape();
    Shape(Shape& id);
    Shape& operator = (const Shape& id);
    virtual ~Shape();
    virtual string ToString() const;
    int ID() const;

};
#endif //INC_3_5_1_SHAPE_HPP
