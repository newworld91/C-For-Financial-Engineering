//
// Created by Steve on 10/26/18.
//

#ifndef INC_2_5_3_ARRAY_HPP
#define INC_2_5_3_ARRAY_HPP
#include "pointer.hpp"

class Array
{
private:
    int m_size;
    Point* m_data;
public:
    Array();
    Array(int size);
    Array(const Array& arr);
    ~Array();

    int Size() const;
    Point& GetElement(int idx) const;
    void SetElement(int idx, const Point& pt);

    Array& operator = (const Array& source);
    Point& operator [] (int idx);

};

#endif //INC_2_5_3_ARRAY_HPP
