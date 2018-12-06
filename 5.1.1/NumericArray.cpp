#ifndef NumericArray_CPP
#define NumericArray_CPP

#include "NumericArray.h"

// Constructors
template <typename T>
NumericArray<T>::NumericArray() : Array<T>()
{ // Default constructor.
}

template <typename T>
NumericArray<T>::NumericArray(int size) : Array<T>(size)
{
}

template <typename T>
NumericArray<T>::NumericArray(const NumericArray<T>& p) : Array<T>(p)
{ // Copy constructor.
}

template <typename T>
NumericArray<T>::~NumericArray()
{ // Destructor
}

// Member operator overloading
template <typename T>
NumericArray<T>& NumericArray<T>::operator = (const NumericArray<T>& source)
{ // Assignment operator

    // Exit if same object
    if (this == &source)
    {
        return *this;
    }

    // Call base class assignment
    Array<T>::operator = (source);

    return *this;
}

template <typename T>
NumericArray<T> NumericArray<T>::operator * (const T& source) const
{
    NumericArray<T> result(*this);

    for (int i = 0; i < result.Size(); i++)
    {
        result[i] *= source;
    }

    return result;
}

template <typename T>
NumericArray<T> NumericArray<T>::operator + (const NumericArray<T>& source) const
{
    if (Array<T>::Size() != source.Size())
    {
        throw IncompatibleSizeException();
    }

    NumericArray<T> result(*this);

    for (int i = 0; i < result.Size(); i++)
    {
        result[i] += source[i];
    }

    return result;
}

// Numeric functionality
template <typename T>
T NumericArray<T>::DotProduct(const NumericArray<T>& source) const
{ // Dot product.

    if (Array<T>::Size() != source.Size())
    {
        throw IncompatibleSizeException();
    }

    T result(0);

    for (int i = 0; i < Array<T>::Size(); i++)
    {
        result += (Array<T>::operator [] (i) * source[i]);
    }

    return result;
}

#endif