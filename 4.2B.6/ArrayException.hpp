//
// Created by Steve on 11/6/18.
//

#ifndef INC_3_6_2_ARRAYEXCEPTION_HPP
#define INC_3_6_2_ARRAYEXCEPTION_HPP
#include <iostream>
using namespace std;

class ArrayException
{
public:
	// Constructor and destructor
	ArrayException()
	{ // Default constructor
	}

	virtual ~ArrayException()
	{ // Destructor
	}

	virtual string GetMessage() = 0;
};
#endif //INC_3_6_2_ARRAYEXCEPTION_HPP
