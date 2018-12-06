//
// Created by Steve on 11/7/18.
//

#ifndef INC_4_2B_2_INCOMPATIBLESIZEEXCEPTION_HPP
#define INC_4_2B_2_INCOMPATIBLESIZEEXCEPTION_HPP

#include "ArrayException.hpp"
#include <sstream>
#include <iostream>
using namespace std;

class IncompatibleSizeException : public ArrayException
{
public:
    // Constructors and destructor
    IncompatibleSizeException() : ArrayException()
    { // Default constructor
    }

    ~IncompatibleSizeException()
    { // Destructor
    }

    string GetMessage()
    {
        stringstream stream;

        stream << "Incompatible size of arrays.";

        return stream.str();
    }
};



#endif //INC_4_2B_2_INCOMPATIBLESIZEEXCEPTION_HPP
