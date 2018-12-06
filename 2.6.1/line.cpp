//
// Created by Steve on 10/26/18.
//

#include "line.hpp"
namespace line1 {
    namespace line2 {

        LineSegment::LineSegment() : startPoint(0, 0), endPoint(0, 0) {

        }

        LineSegment::LineSegment(name1::name2::Point &p1, name1::name2::Point &p2) : startPoint(p1), startPoint(p2) {
        }


        LineSegment::LineSegment(LineSegment &l) : startPoint(l.startPoint), endPoint(l.endPoint) {

        }

        LineSegment::~LineSegment() {

        }

        name1::name2::Point LineSegment::p1() const {
            return startPoint;
        }

        name1::name2::Point LineSegment::p2() const {
            return endPoint;
        }

        void LineSegment::p1(name1::name2::Point &pt) {
            startPoint = pt;
        }

        void LineSegment::p2(name1::name2::Point &pt) {
            endPoint = pt;
        }

        double LineSegment::LineLength() {
            return startPoint.Distance(endPoint);
        }

        string LineSegment::ToString() {
            stringstream stream;

            stream << "Line(" << startPoint.ToString() << "," << endPoint.ToString() << ")";

            return stream.str();
        }

        LineSegment &LineSegment::operator=(const LineSegment &source) { // Assignment operator.

            if (this == &source) {
                return *this;
            }

            startPoint = source.startPoint;
            endPoint = source.endPoint;

            return *this;
        }


    }
}