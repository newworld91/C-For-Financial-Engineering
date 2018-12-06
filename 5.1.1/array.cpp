//
// Created by Steve on 11/1/18.
//
#ifndef ARRAY_CPP
#define ARRAY_CPP
#include "array.h"

using namespace std;
template<typename T>
int Array<T>::size = 10;

template <typename T>
Array<T>::Array()
{
    m_data = new T[size];
    m_size = size;
}

template <typename T>
Array<T>::Array(int size)
{
    m_data = new T[size];
    m_size = size;
}
template <typename T>
Array<T>::Array(const Array<T>& pp)
{
    m_data = new T[pp.m_size];
    m_size = pp.m_size;

    for (int i = 0; i < m_size; i++)
    {
        m_data[i] = pp.m_data[i];
    }
}
template <typename T>
Array<T>::~Array()
{
    delete[] m_data;
}
template <typename T>
Array<T>& Array<T>::operator = (const Array<T>& source)
{
    if (this == &source)
    {
        return *this;
    }


    m_data = new T[source.m_size];
    m_size = source.m_size;

    for (int i = 0; i < m_size; i++)
    {
        m_data[i] = source.m_data[i];
    }

    return *this;
}
template <typename T>
const T& Array<T>::operator [] (int index) const
{
    if (index < 0 || index >= m_size)
    {
        throw OutOfBoundsException(index);
    }

    return m_data[index];
}

template <typename T>
T& Array<T>::operator [] (int index)
{
    if (index < 0 || index >= m_size)
    {
        throw OutOfBoundsException(index);
    }

    return m_data[index];
}

template <typename T>
int Array<T>::Size() const
{
    return m_size;
}
template <typename T>
T& Array<T>::GetElement(int index) const
{
    if (index < 0 || index >= m_size)
    {
        throw OutOfBoundsException(index);
    }
    return m_data[index];
}
template <typename T>
void Array<T>::SetElement(int index, const Array<T>& pt)
{
    if (index < 0 || index >= m_size)
    {
        throw OutOfBoundsException(index);
    };
    m_data[index] = pt;
}

template <typename T>
int Array<T>::DefaultSize()
{
    return size;
}
template <typename T>
void Array<T>::DefaultSize(int size_new)
{
   size_new = size;
}

#endif