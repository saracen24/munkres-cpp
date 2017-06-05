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

#if !defined(_MATRIX_TEST_H_)
#define _MATRIX_TEST_H_

#include "munkres-cpp/matrix.h"
#include "munkres-cpp/adapters/matrix_std_2d_vector.h"
#include <iostream>

#ifdef MUNKRES_CPP_ARMADILLO
#include "munkres-cpp/adapters/matrix_armadillo.h"
#endif

#ifdef MUNKRES_CPP_BOOST
#include "munkres-cpp/adapters/matrix_boost.h"
#endif

#ifdef MUNKRES_CPP_EIGEN3
#include "munkres-cpp/adapters/matrix_eigen.h"
#endif

#ifdef MUNKRES_CPP_OPENCV
#include "munkres-cpp/adapters/matrix_opencv.h"
#endif

#ifdef MUNKRES_CPP_QT
#include "munkres-cpp/adapters/matrix_qt.h"
#endif



template <typename T> class MunkresTestMatrixMunkres : public ::testing::Test {};
typedef ::testing::Types <
      munkres_cpp::Matrix               <signed             char>
    , munkres_cpp::Matrix               <unsigned           char>
    , munkres_cpp::Matrix               <signed   short     int>
    , munkres_cpp::Matrix               <unsigned short     int>
    , munkres_cpp::Matrix               <signed             int>
    , munkres_cpp::Matrix               <unsigned           int>
    , munkres_cpp::Matrix               <signed   long      int>
    , munkres_cpp::Matrix               <unsigned long      int>
    , munkres_cpp::Matrix               <signed   long long int>
    , munkres_cpp::Matrix               <unsigned long long int>
    , munkres_cpp::Matrix               <float>
    , munkres_cpp::Matrix               <double>
    , munkres_cpp::Matrix               <long double>
    > TypesMatrixMunkres;
TYPED_TEST_CASE (MunkresTestMatrixMunkres, TypesMatrixMunkres);

template <typename T> class MunkresTestMatrixArmadillo : public ::testing::Test {};
typedef ::testing::Types <
    #ifdef MUNKRES_CPP_ARMADILLO
      munkres_cpp::matrix_armadillo     <unsigned           char>
    , munkres_cpp::matrix_armadillo     <signed   short     int>
    , munkres_cpp::matrix_armadillo     <unsigned short     int>
    , munkres_cpp::matrix_armadillo     <signed             int>
    , munkres_cpp::matrix_armadillo     <unsigned           int>
    , munkres_cpp::matrix_armadillo     <signed   long      int>
    , munkres_cpp::matrix_armadillo     <unsigned long      int>
    , munkres_cpp::matrix_armadillo     <signed   long long int>
    , munkres_cpp::matrix_armadillo     <unsigned long long int>
    , munkres_cpp::matrix_armadillo     <float>
    , munkres_cpp::matrix_armadillo     <double>
    #endif
    > TypesMatrixArmadillo;
TYPED_TEST_CASE (MunkresTestMatrixArmadillo, TypesMatrixArmadillo);

template <typename T> class MunkresTestMatrixBoost : public ::testing::Test {};
typedef ::testing::Types <
    #ifdef MUNKRES_CPP_BOOST
      munkres_cpp::matrix_boost         <signed             char>
    , munkres_cpp::matrix_boost         <unsigned           char>
    , munkres_cpp::matrix_boost         <signed   short     int>
    , munkres_cpp::matrix_boost         <unsigned short     int>
    , munkres_cpp::matrix_boost         <signed             int>
    , munkres_cpp::matrix_boost         <unsigned           int>
    , munkres_cpp::matrix_boost         <signed   long      int>
    , munkres_cpp::matrix_boost         <unsigned long      int>
    , munkres_cpp::matrix_boost         <signed   long long int>
    , munkres_cpp::matrix_boost         <unsigned long long int>
    , munkres_cpp::matrix_boost         <float>
    , munkres_cpp::matrix_boost         <double>
    , munkres_cpp::matrix_boost         <long double>
    #endif
    > TypesMatrixBoost;
TYPED_TEST_CASE (MunkresTestMatrixBoost, TypesMatrixBoost);

template <typename T> class MunkresTestMatrixEigen : public ::testing::Test {};
typedef ::testing::Types <
    #ifdef MUNKRES_CPP_EIGEN3
      munkres_cpp::matrix_eigen         <signed             char>
    , munkres_cpp::matrix_eigen         <unsigned           char>
    , munkres_cpp::matrix_eigen         <signed   short     int>
    , munkres_cpp::matrix_eigen         <unsigned short     int>
    , munkres_cpp::matrix_eigen         <signed             int>
    , munkres_cpp::matrix_eigen         <unsigned           int>
    , munkres_cpp::matrix_eigen         <signed   long      int>
    , munkres_cpp::matrix_eigen         <unsigned long      int>
    , munkres_cpp::matrix_eigen         <signed   long long int>
    , munkres_cpp::matrix_eigen         <unsigned long long int>
    , munkres_cpp::matrix_eigen         <float>
    , munkres_cpp::matrix_eigen         <double>
    , munkres_cpp::matrix_eigen         <long double>
    #endif
    > TypesMatrixEigen;
TYPED_TEST_CASE (MunkresTestMatrixEigen, TypesMatrixEigen);

template <typename T> class MunkresTestMatrixOpencv : public ::testing::Test {};
typedef ::testing::Types <
    #ifdef MUNKRES_CPP_OPENCV
      munkres_cpp::matrix_opencv        <signed             char>
    , munkres_cpp::matrix_opencv        <unsigned           char>
    , munkres_cpp::matrix_opencv        <signed   short     int>
    , munkres_cpp::matrix_opencv        <unsigned short     int>
    , munkres_cpp::matrix_opencv        <signed             int>
    , munkres_cpp::matrix_opencv        <float>
    , munkres_cpp::matrix_opencv        <double>
    #endif
    > TypesMatrixOpencv;
TYPED_TEST_CASE (MunkresTestMatrixOpencv, TypesMatrixOpencv);

template <typename T> class MunkresTestMatrixQt : public ::testing::Test {};
typedef ::testing::Types <
    #ifdef MUNKRES_CPP_QT
      munkres_cpp::matrix_qt            <signed             char, 3, 3>
    , munkres_cpp::matrix_qt            <unsigned           char, 3, 3>
    , munkres_cpp::matrix_qt            <signed   short     int,  3, 3>
    , munkres_cpp::matrix_qt            <unsigned short     int,  3, 3>
    , munkres_cpp::matrix_qt            <signed             int,  3, 3>
    , munkres_cpp::matrix_qt            <unsigned           int,  3, 3>
    , munkres_cpp::matrix_qt            <signed   long      int,  3, 3>
    , munkres_cpp::matrix_qt            <unsigned long      int,  3, 3>
    , munkres_cpp::matrix_qt            <signed   long long int,  3, 3>
    , munkres_cpp::matrix_qt            <unsigned long long int,  3, 3>
    , munkres_cpp::matrix_qt            <float,                   3, 3>
    , munkres_cpp::matrix_qt            <double,                  3, 3>
    , munkres_cpp::matrix_qt            <long double,             3, 3>
    #endif
    > TypesMatrixQt;
TYPED_TEST_CASE (MunkresTestMatrixQt, TypesMatrixQt);

template <typename T> class MunkresTestMatrixStd2dvector : public ::testing::Test {};
typedef ::testing::Types <
      munkres_cpp::matrix_std_2d_vector <signed             char>
    , munkres_cpp::matrix_std_2d_vector <unsigned           char>
    , munkres_cpp::matrix_std_2d_vector <signed   short     int>
    , munkres_cpp::matrix_std_2d_vector <unsigned short     int>
    , munkres_cpp::matrix_std_2d_vector <signed             int>
    , munkres_cpp::matrix_std_2d_vector <unsigned           int>
    , munkres_cpp::matrix_std_2d_vector <signed   long      int>
    , munkres_cpp::matrix_std_2d_vector <unsigned long      int>
    , munkres_cpp::matrix_std_2d_vector <signed   long long int>
    , munkres_cpp::matrix_std_2d_vector <unsigned long long int>
    , munkres_cpp::matrix_std_2d_vector <float>
    , munkres_cpp::matrix_std_2d_vector <double>
    , munkres_cpp::matrix_std_2d_vector <long double>
    > TypesMatrixStd2dvector;
TYPED_TEST_CASE (MunkresTestMatrixStd2dvector, TypesMatrixStd2dvector);



template <typename T> class MunkresTestSigned : public ::testing::Test {};
typedef ::testing::Types <
      munkres_cpp::Matrix               <signed             char>
    , munkres_cpp::Matrix               <signed   short     int>
    , munkres_cpp::Matrix               <signed             int>
    , munkres_cpp::Matrix               <signed   long      int>
    , munkres_cpp::Matrix               <signed   long long int>
    , munkres_cpp::Matrix               <float>
    , munkres_cpp::Matrix               <double>
    , munkres_cpp::Matrix               <long double>
    #ifdef MUNKRES_CPP_ARMADILLO
    , munkres_cpp::matrix_armadillo     <signed   short     int>
    , munkres_cpp::matrix_armadillo     <signed             int>
    , munkres_cpp::matrix_armadillo     <signed   long      int>
    , munkres_cpp::matrix_armadillo     <signed   long long int>
    , munkres_cpp::matrix_armadillo     <float>
    , munkres_cpp::matrix_armadillo     <double>
    #endif
    #ifdef MUNKRES_CPP_BOOST
    , munkres_cpp::matrix_boost         <signed             char>
    , munkres_cpp::matrix_boost         <signed   short     int>
    , munkres_cpp::matrix_boost         <signed             int>
    , munkres_cpp::matrix_boost         <signed   long      int>
    , munkres_cpp::matrix_boost         <signed   long long int>
    , munkres_cpp::matrix_boost         <float>
    , munkres_cpp::matrix_boost         <double>
    , munkres_cpp::matrix_boost         <long double>
    #endif
    #ifdef MUNKRES_CPP_EIGEN3
    , munkres_cpp::matrix_eigen         <signed             char>
    , munkres_cpp::matrix_eigen         <signed   short     int>
    , munkres_cpp::matrix_eigen         <signed             int>
    , munkres_cpp::matrix_eigen         <signed   long      int>
    , munkres_cpp::matrix_eigen         <signed   long long int>
    , munkres_cpp::matrix_eigen         <float>
    , munkres_cpp::matrix_eigen         <double>
    , munkres_cpp::matrix_eigen         <long double>
    #endif
    #ifdef MUNKRES_CPP_OPENCV
    , munkres_cpp::matrix_opencv        <signed             char>
    , munkres_cpp::matrix_opencv        <signed   short     int>
    , munkres_cpp::matrix_opencv        <signed             int>
    , munkres_cpp::matrix_opencv        <float>
    , munkres_cpp::matrix_opencv        <double>
    #endif
    , munkres_cpp::matrix_std_2d_vector <signed             char>
    , munkres_cpp::matrix_std_2d_vector <signed   short     int>
    , munkres_cpp::matrix_std_2d_vector <signed             int>
    , munkres_cpp::matrix_std_2d_vector <signed   long      int>
    , munkres_cpp::matrix_std_2d_vector <signed   long long int>
    , munkres_cpp::matrix_std_2d_vector <float>
    , munkres_cpp::matrix_std_2d_vector <double>
    , munkres_cpp::matrix_std_2d_vector <long double>
    > TypesSigned;
TYPED_TEST_CASE (MunkresTestSigned, TypesSigned);



template <typename T> class MunkresTestFloating : public ::testing::Test {};
typedef ::testing::Types <
      munkres_cpp::Matrix               <float>
    , munkres_cpp::Matrix               <double>
    , munkres_cpp::Matrix               <long double>
    #ifdef MUNKRES_CPP_ARMADILLO
    , munkres_cpp::matrix_armadillo     <float>
    , munkres_cpp::matrix_armadillo     <double>
    #endif
    #ifdef MUNKRES_CPP_BOOST
    , munkres_cpp::matrix_boost         <float>
    , munkres_cpp::matrix_boost         <double>
    , munkres_cpp::matrix_boost         <long double>
    #endif
    #ifdef MUNKRES_CPP_EIGEN3
    , munkres_cpp::matrix_eigen         <float>
    , munkres_cpp::matrix_eigen         <double>
    , munkres_cpp::matrix_eigen         <long double>
    #endif
    #ifdef MUNKRES_CPP_OPENCV
    , munkres_cpp::matrix_opencv        <float>
    , munkres_cpp::matrix_opencv        <double>
    #endif
    , munkres_cpp::matrix_std_2d_vector <float>
    , munkres_cpp::matrix_std_2d_vector <double>
    , munkres_cpp::matrix_std_2d_vector <long double>
    > TypesFloating;
TYPED_TEST_CASE (MunkresTestFloating, TypesFloating);



template <typename T> class MunkresTestFloatingResizeable : public ::testing::Test {};
typedef ::testing::Types <
      munkres_cpp::Matrix               <float>
    , munkres_cpp::Matrix               <double>
    , munkres_cpp::Matrix               <long double>
    #ifdef MUNKRES_CPP_BOOST
    , munkres_cpp::matrix_boost         <float>
    , munkres_cpp::matrix_boost         <double>
    , munkres_cpp::matrix_boost         <long double>
    #endif
    #ifdef MUNKRES_CPP_EIGEN3
    , munkres_cpp::matrix_eigen         <float>
    , munkres_cpp::matrix_eigen         <double>
    , munkres_cpp::matrix_eigen         <long double>
    #endif
    , munkres_cpp::matrix_std_2d_vector <float>
    , munkres_cpp::matrix_std_2d_vector <double>
    , munkres_cpp::matrix_std_2d_vector <long double>
    > TypesFloatingResizeable;
TYPED_TEST_CASE (MunkresTestFloatingResizeable, TypesFloatingResizeable);



template<typename M>
bool MatrixCompare (const M & a, const M & b)
{
    if (a.rows () != b.rows () || a.columns () != b.columns () ) {
        return false;
    }

    for (unsigned int row = 0; row < a.rows (); ++row) {
        for (unsigned int col = 0; col < a.columns (); ++col) {
            if (a (row, col) != b (row, col) ) {
                return false;
            }
        }
    }

    return true;
}



template<class T>
std::ostream & print_matrix (std::ostream & os, const T & m)
{
    const std::string indent ("           ");
    os << "Matrix (" << &m << ") of " << m.rows () << "x" << m.columns () << std::endl;
    for (unsigned int row = 0; row < m.rows (); ++row) {
        os << indent;
        for (unsigned int col = 0; col < m.columns (); ++col) {
            os << std::setw (4) << std::setfill (' ') << m (row, col) << " ";
        }
        os << std::endl;
    }

    return os;
}

template<class T>
std::ostream & operator << (std::ostream & os, const munkres_cpp::Matrix<T> & m)
{
    return print_matrix (os, m);
}

#ifdef MUNKRES_CPP_BOOST
template<class T>
std::ostream & operator << (std::ostream & os, const munkres_cpp::matrix_boost<T> & m)
{
    return print_matrix (os, m);
}
#endif

#ifdef MUNKRES_CPP_EIGEN3
template<class T>
std::ostream & operator << (std::ostream & os, const munkres_cpp::matrix_eigen<T> & m)
{
    return print_matrix (os, m);
}
#endif

#ifdef MUNKRES_CPP_OPENCV
template<class T>
std::ostream & operator << (std::ostream & os, const munkres_cpp::matrix_opencv<T> & m)
{
    return print_matrix (os, m);
}
#endif

#ifdef MUNKRES_CPP_QT
template<class T, int N, int M>
std::ostream & operator << (std::ostream & os, const munkres_cpp::matrix_qt<T, N, M> & m)
{
    return print_matrix (os, m);
}
#endif

template<class T>
std::ostream & operator << (std::ostream & os, const munkres_cpp::matrix_std_2d_vector<T> & m)
{
    return print_matrix (os, m);
}



template<typename T>
T generateRandomMatrix (const int nrows, const int ncols)
{
    T matrix (nrows, ncols);

    srandom ( time (nullptr) ); // Seed random number generator.

    // Initialize matrix with random values.
    for (unsigned int row = 0; row < matrix.rows (); row++)
        for (unsigned int col = 0; col < matrix.columns (); col++)
            matrix (row,col) = std::abs (static_cast <typename T::matrix_base::value_type> (random () ) );

    return matrix;
}

template<typename T>
void isSingleSolution (T & matrix)
{
    for (unsigned int row = 0; row < matrix.rows (); row++) {
        int columnsolutioncount = 0;
        for (unsigned int col = 0; col < matrix.columns (); col++)
            if (matrix (row,col) == 0)
                columnsolutioncount++;
        EXPECT_EQ ( columnsolutioncount, 1 );
    }

    for (unsigned int col = 0; col < matrix.columns (); col++) {
        int rowsolutioncount = 0;
        for (unsigned int row = 0; row < matrix.rows (); row++)
            if (matrix (row,col) == 0)
                rowsolutioncount++;
        EXPECT_EQ ( rowsolutioncount, 1 );
    }
}

template<typename T>
void isValidOutput (T & matrix)
{
    for (unsigned int row = 0; row < matrix.rows (); row++)
        for (unsigned int col = 0; col < matrix.columns (); col++)
            EXPECT_TRUE ( matrix (row,col) == 0 || matrix (row,col) == 1 );
}

#endif /* !defined(_MATRIX_TEST_H_) */
