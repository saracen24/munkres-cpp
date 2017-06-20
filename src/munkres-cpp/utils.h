#if !defined(__MUNKRES_CPP_UTILS_H__)
#define __MUNKRES_CPP_UTILS_H__

#include <cmath>
#include <cassert>
#include "munkres-cpp/matrix_base.h"



namespace munkres_cpp
{

template<typename T>
typename std::enable_if<std::is_floating_point<T>::value, void>::type
replace_infinites (matrix_base<T> & matrix)
{
    for (size_t j = 0; j < matrix.columns (); j++) {
        for (size_t i = 0; i < matrix.rows (); i++) {
            if (std::isinf (matrix (i, j) ) ) {
                matrix (i, j) = std::numeric_limits<T>::max ();
            }
        }
    }
}



template<typename T>
typename std::enable_if<std::is_integral<T>::value, bool>::type
is_data_invalid (const T & value)
{
    return std::numeric_limits<T>::is_signed && value < matrix_base<T>::zero;
}

template<typename T>
typename std::enable_if<!std::is_integral<T>::value, bool>::type
is_data_invalid (const T & value)
{
    return value < matrix_base<T>::zero || !(std::fpclassify (value) == FP_ZERO || std::fpclassify (value) == FP_NORMAL);
}

template<typename T>
bool is_data_valid (const matrix_base<T> & matrix)
{
    for (size_t j = 0; j < matrix.columns (); ++j) {
        for (size_t i = 0; i < matrix.rows (); ++i) {
            if (is_data_invalid (matrix (i, j) ) ) {
                return false;
            }
        }
    }

    return true;
}


}// namespace munkres_cpp

#endif /* !defined(__MUNKRES_CPP_UTILS_H__) */
