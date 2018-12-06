//
// Created by Steve on 11/6/18.
//

#ifndef INC_4_2A_1_ARRAY_H
#define INC_4_2A_1_ARRAY_H
#include "pointer.hpp"
#include "OutOfBoundsException.hpp"

template <typename T>
class Array
{
private:
    int m_size;
    T* m_data;
public:
    Array();
    explicit Array(int size);
    Array(const Array<T>& pp);
    ~Array();

    int Size() const;
    T& GetElement(int idx) const;
    void SetElement(int idx, const Array<T>& pt);

    Array<T>& operator = (const Array<T>& source);
    T& operator [] (int idx);
    const T& operator [] (int index) const;

};
#endif //INC_4_2A_1_ARRAY_H
