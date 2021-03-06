//
// Created by Steve on 11/7/18.
//


#ifndef Stack_CPP
#define Stack_CPP
#include "StackException.hpp"
#include "Stack.hpp"

// Constructors
template <typename T>
Stack<T>::Stack() : m_current(0)
{ // Default constructor.
}

template <typename T>
Stack<T>::Stack(int size) : m_current(0), m_array(size)
{
}

template <typename T>
Stack<T>::Stack(const Stack<T>& st) : m_current(st.m_current), m_array(st.m_array)
{ // Copy constructor
}

template <typename T>
Stack<T>::~Stack()
{ // Destructor
}

template <typename T>
Stack<T>& Stack<T>::operator = (const Stack<T>& source)
{ // Assignment operator
    if (this == &source)
    {
        return *this;
    }

    m_current = source.m_current;
    m_array = source.m_array;

    return *this;
}

template <typename T>
T& Stack<T>::Pop()
{
    T t;
    try
    {
       t = m_array[m_current-1];
    }
    catch (ArrayException& er)
    {
        throw StackEmptyException();
    }
    m_current--;
    return t;
}

template <typename T>
void Stack<T>::Push(const T& source)
{
    try
    {
        m_array[m_current] = source;
    }
    catch (ArrayException& er)
    {
        throw StackFullException();
    }

        m_current++;
}

#endif