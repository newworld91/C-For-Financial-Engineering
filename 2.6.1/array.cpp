//
// Created by Steve on 10/26/18.
//

#include "array.hpp"

#include "pointer.hpp"
#include <iostream>

using namespace std;
namespace ARR1 {
    namespace ARR2 {
        Array::Array() : m_data(new name1::name2::Point[10]), m_size(10) {
        }

        Array::Array(int size) : m_data(new name1::name2::Point[size]), m_size(size) {
        }

        Array::Array(const Array &pp) {
            m_data = new name1::name2::Point[pp.m_size];
            m_size = pp.m_size;

            for (int i = 0; i < m_size; i++) {
                m_data[i] = pp.m_data[i];
            }
        }

        Array::~Array() {
            delete[] m_data;
        }

        Array &Array::operator=(const Array &source) {
            if (this == &source) {
                return *this;
            }

            delete[] m_data;

            m_data = new name1::name2::Point[source.m_size];
            m_size = source.m_size;

            for (int i = 0; i < m_size; i++) {
                m_data[i] = source.m_data[i];
            }

            return *this;
        }

        name1::name2::Point &Array::operator[](int index) {
            if (index >= m_size) {
                return m_data[0];
            }

            return m_data[index];
        }


        int Array::Size() const {
            return m_size;
        }

        name1::name2::Point &Array::GetElement(int idx) const {
            return m_data[idx];
        }

        void Array::SetElement(int idx, const name1::name2::Point &pt) {

            m_data[idx] = pt;
        }
    }
}