//
// Created by Steve on 11/1/18.
//

#include "shape.hpp"

Shape::Shape() : m_id(rand()){}
Shape::Shape(Shape& source)
{
    m_id = source.m_id;
}
Shape& Shape::operator=(const Shape& id)
{
    if (this == &id)
    {
        return *this;
    }
    m_id = id.m_id;

    return *this;
}
Shape::~Shape(){}

int Shape::ID() const {return m_id;}

string Shape::ToString() const
{
    stringstream stream;

    stream << m_id;

    return stream.str();
}

void Shape::Print()
{
    cout << ToString() << endl;
}
