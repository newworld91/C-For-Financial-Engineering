//
// Created by Steve on 11/13/18.
//

#ifndef INC_5_3_VISITOR_HPP
#define INC_5_3_VISITOR_HPP
#include <boost/variant/static_visitor.hpp>
#include "pointer.hpp"
#include "line.hpp"
#include "circle.hpp"

class Visitor : public boost::static_visitor<void>
{
private:
    double m_dx; // x-coordinate
    double m_dy; // y-coordinate

public:

    Visitor();
    Visitor(const Visitor& source);
    Visitor(double x, double y);
    ~Visitor();
    Visitor& operator = (const Visitor& source);
    void operator () (Point& p) const;
    void operator () (Line& p) const;
    void operator () (Circle& p) const; 
};

#endif //INC_5_3_VISITOR_HPP
