//
// Created by Steve on 10/31/18.
//

#ifndef INC_3_4_2_SHAPE_HPP
#define INC_3_4_2_SHAPE_HPP

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
    string ToString() const;
    int ID() const;

};


#endif //INC_3_4_2_SHAPE_HPP
