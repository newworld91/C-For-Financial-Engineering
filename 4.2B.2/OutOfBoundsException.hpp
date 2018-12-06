//
// Created by Steve on 11/6/18.
//

#ifndef INC_3_6_2_OUTOFBOUNDSEXCEPTION_HPP
#define INC_3_6_2_OUTOFBOUNDSEXCEPTION_HPP
#include "ArrayException.hpp"
#include <sstream>
#include <iostream>
using namespace std;

class OutOfBoundsException : public ArrayException
{
private:
    int m_index;

public:
    // Constructors and destructor
    OutOfBoundsException() : ArrayException()
    { // Default constructor
    }

    OutOfBoundsException(int index) : ArrayException()
    { // Constructor accepting erroneous array index
        m_index = index;
    }

    virtual ~OutOfBoundsException()
    { // Destructor
    }

    string GetMessage()
    {
        stringstream stream;

        stream << "Index " << m_index << " is out of bound.";

        return stream.str();
    }
};
#endif //INC_3_6_2_OUTOFBOUNDSEXCEPTION_HPP
