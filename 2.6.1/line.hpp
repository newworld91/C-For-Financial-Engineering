//
// Created by Steve on 10/26/18.
//

#ifndef INC_2_6_1_LINE_HPP
#define INC_2_6_1_LINE_HPP
#include "pointer.hpp"
#include <iostream>
#include <cmath>
using namespace std;

namespace line1{
    namespace line2 {
        class LineSegment {
        private:

            name1::name2::Point startPoint;
            name1::name2::Point endPoint;

        public:

            // Constructors
            LineSegment();

            LineSegment(name1::name2::Point &p1, name1::name2::Point &p2);

            LineSegment(LineSegment &l);

            ~LineSegment();

            // Accesssing functions
            name1::name2::Point p1() const;

            name1::name2::Point p2() const;

            // Modifiers
            void p1(name1::name2::Point &pt);

            void p2(name1::name2::Point &pt);

            double LineLength();

            string ToString();

            LineSegment &operator=(const LineSegment &source);

            inline friend ostream& operator << (ostream& os, LineSegment& line)
            {
                os << line.ToString() << endl;

                return os;
            }
        };



    }
}


#endif //INC_2_6_1_LINE_HPP
