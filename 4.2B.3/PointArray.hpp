//
// Created by Steve on 11/7/18.
//

#ifndef INC_4_2B_3_POINTARRAY_HPP
#define INC_4_2B_3_POINTARRAY_HPP
#include "array.cpp"
#include "pointer.hpp"

class PointArray : public Array<Point>
{
public:
    PointArray();
    PointArray(int size);
    PointArray(const PointArray& p);

    ~PointArray();
    PointArray& operator = (const PointArray& source);
    double Length();
};

#endif //INC_4_2B_3_POINTARRAY_HPP
