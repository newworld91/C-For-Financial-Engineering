//
// Created by Steve on 11/7/18.
//

#include "PointArray.hpp"

PointArray::PointArray() : Array () {}
PointArray::PointArray(int size) : Array(size) {}
PointArray::PointArray(const PointArray& p) : Array(p) {}
PointArray::~PointArray() {}

PointArray& PointArray::operator = (const PointArray& source)
{
    if (this == &source)
    {
        return *this;
    }
    Array<Point>::operator=(source);
    return *this;
}
double PointArray::Length()
{
    double length = 0.0;

    for (int i = 0; i < Array<Point>::Size() -1 ; i++)
    {
        length += (Array<Point>:: operator [] (i)).Distance(Array<Point>:: operator [] (i + 1));
    }

    return length;
}
