//
// Created by Steve on 11/1/18.
//

#ifndef INC_3_5_5_ARRAY_HPP
#define INC_3_5_5_ARRAY_HPP

#include "pointer.hpp"

class Array
{
private:
    int m_size;
    Point* m_data;
public:
    Array();
    Array(int m_size);
    Array(Array& arr);
    ~Array();

    int Size() const;
    Point& GetElement(int idx) const;
    void SetElement(int idx, const Point& pt);

    Array& operator = (const Array& source);
    Point& operator [] (int idx);

};

#endif //INC_3_5_5_ARRAY_HPP
