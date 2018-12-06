//
// Created by Steve on 11/7/18.
//

#ifndef INC_4_2B_2_NUMERICARRAY_H
#define INC_4_2B_2_NUMERICARRAY_H

#include "array.h"
#include "IncompatibleSizeException.hpp"

template <typename T>
class NumericArray : public Array<T>
{
private:

public:
    // Constructors
    NumericArray();
    NumericArray(int size);
    NumericArray(const NumericArray<T>& pn);

    // Destructor
    ~NumericArray();

    // Member operator overloading
    NumericArray<T>& operator = (const NumericArray<T>& source);
    NumericArray<T> operator * (const T& factor) const;
    NumericArray<T> operator + (const NumericArray<T>& n2) const;

    // Numeric functionality
    T DotProduct(const NumericArray<T>& n2) const;
};
#ifndef NumericArray_CPP     // Checking NUMERICARRAY.CPP file and including it with NUMERICARRAY.H	file.
#include "NumericArray.cpp"
#endif
#endif //INC_4_2B_2_NUMERICARRAY_H
