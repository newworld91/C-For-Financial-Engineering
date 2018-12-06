//
// Created by Steve on 10/26/18.
//

#ifndef INC_2_6_1_CIRCLE_HPP
#define INC_2_6_1_CIRCLE_HPP
#include "pointer.hpp"
#include <cmath>
#define _USE_MATH_DEFINES
namespace circle1 {
    namespace circle2{
        class Circle {
        private:
            double m_radius;
            name1::name2::Point center;
        public:
            Circle();

            Circle(double m_radius, name1::name2::Point &p1);

            Circle(const Circle &m);

            ~Circle();

            name1::name2::Point CenterPoint(name1::name2::Point &p1);

            void Radius(double &r);

            double Radius() const;

            double Diameter() const;

            double Area() const;

            double Circumference() const;

            string ToString();

            Circle &operator=(const Circle &source);

            friend ostream &operator<<(ostream &os, Circle &point);
        };


    }
}


#endif //INC_2_6_1_CIRCLE_HPP
