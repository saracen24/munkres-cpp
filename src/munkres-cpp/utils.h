#if !defined(__MUNKRES_CPP_UTILS_H__)
#define __MUNKRES_CPP_UTILS_H__

#include <cmath>
#include <cassert>
#include "munkres-cpp/matrix_base.h"



namespace munkres_cpp
{

template<typename T>
constexpr void replace_infinites (matrix_base<T> &, std::true_type)
{
}

template<typename T>
void replace_infinites (matrix_base<T> & matrix, std::false_type)
{
    // Find the greatest value in the matrix that isn't infinity.
    T max = matrix_base<T>::zero;
    for (size_t j = 0; j < matrix.columns (); j++) {
        for (size_t i = 0; i < matrix.rows (); i++) {
            if (std::isfinite (matrix (i, j) ) && matrix (i, j) > max) {
                max = std::nextafter (matrix (i, j), std::numeric_limits<T>::max () );
            }
        }
    }

    for (size_t j = 0; j < matrix.columns (); j++) {
        for (size_t i = 0; i < matrix.rows (); i++) {
            if (std::isinf (matrix (i, j) ) ) {
                matrix (i, j) = max;
            }
        }
    }
}

template<typename T>
void replace_infinites (matrix_base<T> & matrix)
{
    replace_infinites (matrix, typename std::is_integral<T>::type () );
}



template<typename T>
constexpr bool is_data_valid (const T & value, std::true_type)
{
    return std::numeric_limits<T>::is_signed && value >= matrix_base<T>::zero;
}

template<typename T>
constexpr bool is_data_valid (const T & value, std::false_type)
{
    return value >= matrix_base<T>::zero
        && (std::fpclassify (value) == FP_ZERO || std::fpclassify (value) == FP_NORMAL);
}

template<typename T>
bool is_data_valid (const matrix_base<T> & matrix)
{
    for (size_t j = 0; j < matrix.columns (); ++j) {
        for (size_t i = 0; i < matrix.rows (); ++i) {
            if (!is_data_valid (matrix (i, j), typename std::is_integral<T>::type () ) ) {
                return false;
            }
        }
    }

    return true;
}

}// namespace munkres_cpp

#endif /* !defined(__MUNKRES_CPP_UTILS_H__) */
