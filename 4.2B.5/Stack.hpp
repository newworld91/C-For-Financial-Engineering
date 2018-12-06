//
// Created by Steve on 11/7/18.
//

#ifndef INC_4_2B_4_STACK_HPP
#define INC_4_2B_4_STACK_HPP
#include "array.cpp"

template <typename T>
class Stack
{
private:
    int m_current;
    Array<T> m_array;

public:
    // Constructors
    Stack();
    Stack(int size);
    Stack(const Stack<T>& st);

    // Destructor
    ~Stack();

    // Member operator overloading
    Stack<T>& operator = (const Stack<T>& source);

    // Functionalities
    T& Pop();
    void Push(const T& newT);
};


#endif //INC_4_2B_4_STACK_HPP
