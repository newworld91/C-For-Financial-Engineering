//
// Created by Steve on 11/12/18.
//

#ifndef INC_7_3_FUNCTINOBJECT_HPP
#define INC_7_3_FUNCTINOBJECT_HPP

template <typename T>
class FunctionObject
{
private:
	T limit;

public:

	FunctionObject();
	FunctionObject(const T& t);
	FunctionObject(const FunctionObject<T>& source);
	~FunctionObject();

	FunctionObject<T>& operator = (const FunctionObject<T>& source);
	int operator () (const T& t) const;
};

#endif //INC_7_3_FUNCTINOBJECT_HPP
