//
// Created by Steve on 11/12/18.
//

#include "functinobject.hpp"


template <typename T>
FunctionObject<T>::FunctionObject()
{
}

template <typename T>
FunctionObject<T>::FunctionObject(const T& t) : limit(t)
{
}

template <typename T>
FunctionObject<T>::FunctionObject(const FunctionObject<T>& source) : limit(source.limit)
{
}

template <typename T>
FunctionObject<T>::~FunctionObject()
{
}

template <typename T>
FunctionObject<T>& FunctionObject<T>::operator = (const FunctionObject<T>& source)
{
    if (this == &source)
    {
        return *this;
    }

    limit = source.limit;
    return *this;
}

template <typename T>
int FunctionObject<T>::operator () (const T& t) const
{
    return t < limit;
}
