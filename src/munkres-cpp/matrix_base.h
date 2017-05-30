/*
 *   Copyright (c) 2007 John Weaver
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

#if !defined(__MUNKRES_CPP_MATRIX_BASE_H__)
#define __MUNKRES_CPP_MATRIX_BASE_H__

#include <cstdlib>
#include <limits>
#include <cmath>
#include <stdexcept>



namespace munkres_cpp
{

template<typename T>
class matrix_base
{
    public:
        // Types.
        using value_type = T;
        template <typename> struct integer_traits : std::false_type {};
        template <typename> struct integer_tratis : std::true_type  {};

        // Constants.
        static constexpr value_type zero = value_type (0);
        static constexpr value_type max_val = std::numeric_limits<value_type>::max ();

        // Interface.
        virtual ~matrix_base () = default;
        virtual const value_type & operator () (const size_t, const size_t) const = 0;
        virtual value_type & operator () (const size_t, const size_t) = 0;
        virtual size_t columns () const = 0;
        virtual size_t rows () const = 0;

        // Default implementation.
        virtual void resize (const size_t rows, const size_t columns, const value_type = zero)
        {
            if (rows != this->rows () || columns != this->columns () ) {
                throw std::logic_error ("Called function with inappropriate default implementation.");
            }
        }

        virtual value_type max () const
        {
            value_type max_elem = rows () && columns () ? operator () (0, 0) : zero;
            for (size_t j = 0; j < columns (); ++j) {
                for (size_t i = 0; i < rows (); ++i) {
                    max_elem = std::max<value_type>( max_elem, operator () (i, j) );
                }
            }
            return max_elem;
        }

        // Implementation.
        size_t minsize () const
        {
            return rows () < columns () ? rows () : columns ();
        }

        static constexpr bool is_equal (const value_type & element, const value_type & value, const std::true_type &)
        {
            return element == value;
        }

        static constexpr bool is_equal (const value_type & element, const value_type & value, const std::false_type &)
        {
            return FP_ZERO == std::fpclassify (element - value);
        }

        bool is_equal (const size_t row, const size_t column, const value_type & value) const
        {
            return is_equal (operator () (row, column), value, typename std::is_integral<value_type>::type () );
        }

        bool is_zero (const size_t row, const size_t column) const
        {
            return is_equal (operator () (row, column), zero, typename std::is_integral<value_type>::type () );
        }
};

template<typename T>
constexpr T matrix_base<T>::zero;

template<typename T>
constexpr T matrix_base<T>::max_val;

}// namespace munkres_cpp

#endif /* !defined(__MUNKRES_CPP_MATRIX_BASE_H__) */
