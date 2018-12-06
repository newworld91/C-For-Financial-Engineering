//
// Created by Steve on 11/7/18.
//

#ifndef INC_4_2B_4_STACK_HPP
#define INC_4_2B_4_STACK_HPP
#include "array.cpp"

template <typename T, int size>
class Stack
{
private:
    int m_current;
    Array<T> m_array;

public:
    // Constructors
    Stack();
    Stack(const Stack<T,size>& st);

    // Destructor
    ~Stack();

    // Member operator overloading
    Stack<T,size>& operator = (const Stack<T,size>& source);

    // Functionalities
    T& Pop();
    void Push(const T& newT);
};


#endif //INC_4_2B_4_STACK_HPP
