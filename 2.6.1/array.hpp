//
// Created by Steve on 10/26/18.
//

#ifndef INC_2_6_1_ARRAY_HPP
#define INC_2_6_1_ARRAY_HPP
#include "pointer.hpp"

namespace ARR1 {
    namespace ARR2 {
        class Array {
        private:
            int m_size;
            name1::name2::Point *m_data;
        public:
            Array();

            Array(int size);

            Array(const Array &arr);

            ~Array();

            int Size() const;

            name1::name2::Point &GetElement(int idx) const;

            void SetElement(int idx, const name1::name2::Point &pt);

            Array &operator=(const Array &source);

            name1::name2::Point &operator[](int idx);

        };
    }
}
#endif //INC_2_6_1_ARRAY_HPP
