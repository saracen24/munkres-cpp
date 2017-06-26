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

#if !defined(_MUNKRES_ADAPTERS_STD_2D_VECTOR_H_)
#define _MUNKRES_ADAPTERS_STD_2D_VECTOR_H_

#include "munkres-cpp/munkres.h"
#include <vector>

namespace munkres_cpp
{

template<class T>
class matrix_std_2d_vector : public matrix_base<T>
{
    public:
        matrix_std_2d_vector (std::vector<std::vector<T>> & data)
            : data_handler {data}
        {
        }

        matrix_std_2d_vector (const size_t rows, const size_t columns)
            : data_storage {}
            , data_handler {data_storage}
        {
            resize (rows, columns);
        }

        const T & operator () (const size_t row, const size_t column) const override
        {
            return data_handler [row][column];
        };

        T & operator () (const size_t row, const size_t column) override
        {
            return data_handler [row][column];
        }

        size_t columns () const override
        {
            size_t columns = data_handler.size () ? data_handler [0].size () : 0;
            for (size_t i = 0; i < data_handler.size (); ++i) {
                columns = std::min (columns, data_handler [i].size () );
            }
            return columns;
        }

        size_t rows () const override
        {
            return data_handler.size ();
        }

        void resize (const size_t rows, const size_t columns, const T value = T (0) ) override
        {
            data_handler.resize (rows);
            for (size_t i = 0; i < rows; ++i) {
                data_handler [i].resize (columns, value);
            }
        }

    private:
        std::vector<std::vector<T>>   data_storage;
        std::vector<std::vector<T>> & data_handler;
};

}// namespace munkres_cpp

#endif /* !defined(_MUNKRES_ADAPTERS_STD_2D_VECTOR_H_) */
