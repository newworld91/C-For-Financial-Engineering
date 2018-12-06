//
// Created by Steve on 11/7/18.
//


#ifndef Stack_CPP
#define Stack_CPP
#include "StackException.hpp"
#include "Stack.hpp"

// Constructors
template <typename T, int size>
Stack<T, size>::Stack() : m_current(0)
{ // Default constructor.
}


template <typename T, int size>
Stack<T, size>::Stack(const Stack<T,size>& st) : m_current(st.m_current), m_array(st.m_array)
{ // Copy constructor
}

template <typename T, int size>
Stack<T, size>::~Stack()
{ // Destructor
}

template <typename T, int size>
Stack<T, size>& Stack<T, size>::operator = (const Stack<T,size>& source)
{ // Assignment operator
    if (this == &source)
    {
        return *this;
    }

    m_current = source.m_current;
    m_array = source.m_array;

    return *this;
}

template <typename T, int size>
T& Stack<T, size>::Pop()
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

template <typename T, int size>
void Stack<T, size>::Push(const T& source)
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