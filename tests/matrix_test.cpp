#include <gtest/gtest.h>
#include "matrix_test.h"
#include <iostream>
#include <iomanip>



template<typename TypeParam>
void resize_From1x1To2x2WithDefaultValueDefaulted_Success ()
{
    // Arrange.
    TypeParam e (2, 2);
    e(0, 0)=7.0;  e(0, 1)=0.0;
    e(1, 0)=0.0;  e(1, 1)=0.0;

    TypeParam t (1, 1);
    t(0, 0)=7.0;

    // Act.
    t.resize (2, 2);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, resize_From1x1To2x2WithDefaultValueDefaulted_Success)
{
    resize_From1x1To2x2WithDefaultValueDefaulted_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, resize_From1x1To2x2WithDefaultValueDefaulted_Success)
{
    resize_From1x1To2x2WithDefaultValueDefaulted_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, resize_From1x1To2x2WithDefaultValueDefaulted_Success)
{
    resize_From1x1To2x2WithDefaultValueDefaulted_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, resize_From1x1To2x2WithDefaultValueDefaulted_Success)
{
    resize_From1x1To2x2WithDefaultValueDefaulted_Success<TypeParam> ();
}



template<typename TypeParam>
void resize_From1x1To5x5WithDefaultValueDefaulted_Success ()
{
    // Arrange.
    TypeParam e (5, 5);
    e(0, 0)=7.0;  e(0, 1)=0.0;  e(0, 2)=0.0;  e(0, 3)=0.0;  e(0, 4)=0.0;
    e(1, 0)=0.0;  e(1, 1)=0.0;  e(1, 2)=0.0;  e(1, 3)=0.0;  e(1, 4)=0.0;
    e(2, 0)=0.0;  e(2, 1)=0.0;  e(2, 2)=0.0;  e(2, 3)=0.0;  e(2, 4)=0.0;
    e(3, 0)=0.0;  e(3, 1)=0.0;  e(3, 2)=0.0;  e(3, 3)=0.0;  e(3, 4)=0.0;
    e(4, 0)=0.0;  e(4, 1)=0.0;  e(4, 2)=0.0;  e(4, 3)=0.0;  e(4, 4)=0.0;

    TypeParam t (1, 1);
    t(0, 0)=7.0;

    // Act.
    t.resize (5, 5);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, resize_From1x1To5x5WithDefaultValueDefaulted_Success)
{
    resize_From1x1To5x5WithDefaultValueDefaulted_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, resize_From1x1To5x5WithDefaultValueDefaulted_Success)
{
    resize_From1x1To5x5WithDefaultValueDefaulted_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, resize_From1x1To5x5WithDefaultValueDefaulted_Success)
{
    resize_From1x1To5x5WithDefaultValueDefaulted_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, resize_From1x1To5x5WithDefaultValueDefaulted_Success)
{
    resize_From1x1To5x5WithDefaultValueDefaulted_Success<TypeParam> ();
}



template<typename TypeParam>
void resize_From5x5To3x3WithDefaultValueDefaulted_Success ()
{
    // Arrange.
    TypeParam e (3, 3);
    e(0, 0)=0.0;  e(0, 1)=0.1;  e(0, 2)=0.2;
    e(1, 0)=1.0;  e(1, 1)=1.1;  e(1, 2)=1.2;
    e(2, 0)=2.0;  e(2, 1)=2.1;  e(2, 2)=2.2;

    TypeParam t (5, 5);
    t(0, 0)=0.0;  t(0, 1)=0.1;  t(0, 2)=0.2;  t(0, 3)=0.3;  t(0, 4)=0.4;
    t(1, 0)=1.0;  t(1, 1)=1.1;  t(1, 2)=1.2;  t(1, 3)=1.3;  t(1, 4)=1.4;
    t(2, 0)=2.0;  t(2, 1)=2.1;  t(2, 2)=2.2;  t(2, 3)=2.3;  t(2, 4)=2.4;
    t(3, 0)=3.0;  t(3, 1)=3.1;  t(3, 2)=3.2;  t(3, 3)=3.3;  t(3, 4)=3.4;
    t(4, 0)=4.0;  t(4, 1)=4.1;  t(4, 2)=4.2;  t(4, 3)=4.3;  t(4, 4)=4.4;

    // Act.
    t.resize (3, 3);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, resize_From5x5To3x3WithDefaultValueDefaulted_Success)
{
    resize_From5x5To3x3WithDefaultValueDefaulted_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, resize_From5x5To3x3WithDefaultValueDefaulted_Success)
{
    resize_From5x5To3x3WithDefaultValueDefaulted_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, resize_From5x5To3x3WithDefaultValueDefaulted_Success)
{
    resize_From5x5To3x3WithDefaultValueDefaulted_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, resize_From5x5To3x3WithDefaultValueDefaulted_Success)
{
    resize_From5x5To3x3WithDefaultValueDefaulted_Success<TypeParam> ();
}



template<typename TypeParam>
void resize_From2x2To4x4WithDefaultValueExplicit_Success ()
{
    // Arrange.
    TypeParam e (4, 4);
    e(0, 0)=0.0;  e(0, 1)=0.1;  e(0, 2)=9.9;  e(0, 3)=9.9;
    e(1, 0)=1.0;  e(1, 1)=1.1;  e(1, 2)=9.9;  e(1, 3)=9.9;
    e(2, 0)=9.9;  e(2, 1)=9.9;  e(2, 2)=9.9;  e(2, 3)=9.9;
    e(3, 0)=9.9;  e(3, 1)=9.9;  e(3, 2)=9.9;  e(3, 3)=9.9;

    TypeParam t (2, 2);
    t(0, 0)=0.0;  t(0, 1)=0.1;
    t(1, 0)=1.0;  t(1, 1)=1.1;

    // Act.
    t.resize (4, 4, 9.9);

    // Assert.
    EXPECT_PRED2 (MatrixCompare<TypeParam>, e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, resize_From2x2To4x4WithDefaultValueExplicit_Success)
{
    resize_From2x2To4x4WithDefaultValueExplicit_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, resize_From2x2To4x4WithDefaultValueExplicit_Success)
{
    resize_From2x2To4x4WithDefaultValueExplicit_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, resize_From2x2To4x4WithDefaultValueExplicit_Success)
{
    resize_From2x2To4x4WithDefaultValueExplicit_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, resize_From2x2To4x4WithDefaultValueExplicit_Success)
{
    resize_From2x2To4x4WithDefaultValueExplicit_Success<TypeParam> ();
}



template<typename TypeParam>
void max_1x1_Success ()
{
    // Arrange.
    TypeParam m (1, 1);
    m(0, 0)=0.0;
    const typename TypeParam::matrix_base & cm = m;

    constexpr typename TypeParam::matrix_base::value_type e = 0.0;

    // Act.
    const typename TypeParam::matrix_base::value_type t = cm.max ();

    // Assert.
    EXPECT_FLOAT_EQ (e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, max_1x1_Success)
{
    max_1x1_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, max_1x1_Success)
{
    max_1x1_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, max_1x1_Success)
{
    max_1x1_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, max_1x1_Success)
{
    max_1x1_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, max_1x1_Success)
{
    max_1x1_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, max_1x1_Success)
{
    max_1x1_Success<TypeParam> ();
}



template<typename TypeParam>
void max_2x2MinusInfinity_Success ()
{
    // Arrange.
    using value_type = typename TypeParam::matrix_base::value_type;
    constexpr value_type minusInfinity = -std::numeric_limits<value_type>::infinity ();
    TypeParam m (2, 2);
    m(0, 0)=minusInfinity;  m(0, 1)=minusInfinity;
    m(1, 0)=minusInfinity;  m(1, 1)=minusInfinity;
    const typename TypeParam::matrix_base & cm = m;

    constexpr value_type e = minusInfinity;

    // Act.
    const value_type t = cm.max ();

    // Assert.
    EXPECT_FLOAT_EQ (e, t);
}

TYPED_TEST (MunkresTestFloating, max_2x2MinusInfinity_Success)
{
    max_2x2MinusInfinity_Success<TypeParam> ();
}



template<typename TypeParam>
void max_2x2Negative_Success ()
{
    // Arrange.
    using value_type = typename TypeParam::matrix_base::value_type;
    constexpr value_type minusInfinity = -std::numeric_limits<value_type>::infinity ();
    constexpr value_type negativeValue =  std::numeric_limits<value_type>::lowest ();
    TypeParam m (2, 2);
    m(0, 0)=negativeValue;  m(0, 1)=minusInfinity;
    m(1, 0)=minusInfinity;  m(1, 1)=negativeValue;
    const typename TypeParam::matrix_base & cm = m;

    constexpr value_type e = negativeValue;

    // Act.
    const value_type t = cm.max ();

    // Assert.
    EXPECT_FLOAT_EQ (e, t);
}

TYPED_TEST (MunkresTestFloating, max_2x2Negative_Success)
{
    max_2x2Negative_Success<TypeParam> ();
}



template<typename TypeParam>
void max_2x2Zero_Success ()
{
    // Arrange.
    using value_type = typename TypeParam::matrix_base::value_type;
    constexpr value_type minusInfinity = -std::numeric_limits<value_type>::infinity ();
    constexpr value_type negativeValue =  std::numeric_limits<value_type>::lowest ();
    TypeParam m (2, 2);
    m(0, 0)=          0.0;  m(0, 1)=minusInfinity;
    m(1, 0)=minusInfinity;  m(1, 1)=negativeValue;
    const typename TypeParam::matrix_base & cm = m;

    constexpr value_type e = 0.0;

    // Act.
    const value_type t = cm.max ();

    // Assert.
    EXPECT_FLOAT_EQ (e, t);
}

TYPED_TEST (MunkresTestFloating, max_2x2Zero_Success)
{
    max_2x2Zero_Success<TypeParam> ();
}



template<typename TypeParam>
void max_2x2Positive_Success ()
{
    // Arrange.
    using value_type = typename TypeParam::matrix_base::value_type;
    constexpr value_type minusInfinity = -std::numeric_limits<value_type>::infinity ();
    constexpr value_type negativeValue =  std::numeric_limits<value_type>::lowest ();
    constexpr value_type positiveValue =  std::numeric_limits<value_type>::max ();
    TypeParam m (2, 2);
    m(0, 0)=negativeValue;  m(0, 1)=minusInfinity;
    m(1, 0)=positiveValue;  m(1, 1)=          0.0;
    const typename TypeParam::matrix_base & cm = m;

    constexpr value_type e = positiveValue;

    // Act.
    const value_type t = cm.max ();

    // Assert.
    EXPECT_FLOAT_EQ (e, t);
}

TYPED_TEST (MunkresTestFloating, max_2x2Positive_Success)
{
    max_2x2Positive_Success<TypeParam> ();
}



template<typename TypeParam>
void max_2x2PlusInfinity_Success ()
{
    // Arrange.
    using value_type = typename TypeParam::matrix_base::value_type;
    constexpr value_type minusInfinity = -std::numeric_limits<value_type>::infinity ();
    constexpr value_type plusInfinity  =  std::numeric_limits<value_type>::infinity ();
    constexpr value_type negativeValue =  std::numeric_limits<value_type>::lowest ();
    constexpr value_type positiveValue =  std::numeric_limits<value_type>::max ();
    TypeParam m (2, 2);
    m(0, 0)=minusInfinity;  m(0, 1)=positiveValue;
    m(1, 0)=negativeValue;  m(1, 1)=plusInfinity;
    const typename TypeParam::matrix_base & cm = m;

    constexpr value_type e = plusInfinity;

    // Act.
    const value_type t = cm.max ();

    // Assert.
    EXPECT_FLOAT_EQ (e, t);
}

TYPED_TEST (MunkresTestFloating, max_2x2PlusInfinity_Success)
{
    max_2x2PlusInfinity_Success<TypeParam> ();
}



template<typename TypeParam>
void minsize_RowsCountIsMin_Success ()
{
    // Arrange.
    TypeParam m (1, 2);
    constexpr size_t e = 1;

    // Act.
    const size_t t = m.minsize ();

    // Assert.
    EXPECT_EQ (e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, minsize_RowsCountIsMin_Success)
{
    minsize_RowsCountIsMin_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, minsize_RowsCountIsMin_Success)
{
    minsize_RowsCountIsMin_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, minsize_RowsCountIsMin_Success)
{
    minsize_RowsCountIsMin_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, minsize_RowsCountIsMin_Success)
{
    minsize_RowsCountIsMin_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, minsize_RowsCountIsMin_Success)
{
    minsize_RowsCountIsMin_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, minsize_RowsCountIsMin_Success)
{
    minsize_RowsCountIsMin_Success<TypeParam> ();
}



template<typename TypeParam>
void minsize_ColumnsCountIsMin_Success ()
{
    // Arrange.
    TypeParam m (2, 1);
    constexpr size_t e = 1;

    // Act.
    const size_t t = m.minsize ();

    // Assert.
    EXPECT_EQ (e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, minsize_ColumnsCountIsMin_Success)
{
    minsize_ColumnsCountIsMin_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, minsize_ColumnsCountIsMin_Success)
{
    minsize_ColumnsCountIsMin_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, minsize_ColumnsCountIsMin_Success)
{
    minsize_ColumnsCountIsMin_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, minsize_ColumnsCountIsMin_Success)
{
    minsize_ColumnsCountIsMin_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, minsize_ColumnsCountIsMin_Success)
{
    minsize_ColumnsCountIsMin_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, minsize_ColumnsCountIsMin_Success)
{
    minsize_ColumnsCountIsMin_Success<TypeParam> ();
}



template<typename TypeParam>
void minsize_RowsCountAndColumnsCountAreEqual_Success ()
{
    // Arrange.
    TypeParam m (3, 3);
    constexpr size_t e = 3;

    // Act.
    const size_t t = m.minsize ();

    // Assert.
    EXPECT_EQ (e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, minsize_RowsCountAndColumnsCountAreEqual_Success)
{
    minsize_RowsCountAndColumnsCountAreEqual_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, minsize_RowsCountAndColumnsCountAreEqual_Success)
{
    minsize_RowsCountAndColumnsCountAreEqual_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, minsize_RowsCountAndColumnsCountAreEqual_Success)
{
    minsize_RowsCountAndColumnsCountAreEqual_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, minsize_RowsCountAndColumnsCountAreEqual_Success)
{
    minsize_RowsCountAndColumnsCountAreEqual_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, minsize_RowsCountAndColumnsCountAreEqual_Success)
{
    minsize_RowsCountAndColumnsCountAreEqual_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixQt, minsize_RowsCountAndColumnsCountAreEqual_Success)
{
    minsize_RowsCountAndColumnsCountAreEqual_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, minsize_RowsCountAndColumnsCountAreEqual_Success)
{
    minsize_RowsCountAndColumnsCountAreEqual_Success<TypeParam> ();
}



template<typename TypeParam>
void minsize_columns_Success ()
{
    // Arrange.
    TypeParam m (2, 3);
    constexpr size_t e = 3;

    // Act.
    const size_t t = m.columns ();

    // Assert.
    EXPECT_EQ (e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, minsize_columns_Success)
{
    minsize_columns_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, minsize_columns_Success)
{
    minsize_columns_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, minsize_columns_Success)
{
    minsize_columns_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, minsize_columns_Success)
{
    minsize_columns_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, minsize_columns_Success)
{
    minsize_columns_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, minsize_columns_Success)
{
    minsize_columns_Success<TypeParam> ();
}




template<typename TypeParam>
void minsize_rows_Success ()
{
    // Arrange.
    TypeParam m (2, 3);
    constexpr size_t e = 2;

    // Act.
    const size_t t = m.rows ();

    // Assert.
    EXPECT_EQ (e, t);
}

TYPED_TEST (MunkresTestMatrixMunkres, minsize_rows_Success)
{
    minsize_rows_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixArmadillo, minsize_rows_Success)
{
    minsize_rows_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixBoost, minsize_rows_Success)
{
    minsize_rows_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixEigen, minsize_rows_Success)
{
    minsize_rows_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixOpencv, minsize_rows_Success)
{
    minsize_rows_Success<TypeParam> ();
}

TYPED_TEST (MunkresTestMatrixStd2dvector, minsize_rows_Success)
{
    minsize_rows_Success<TypeParam> ();
}



class MatrixTest : public ::testing::Test
{
};



TEST_F (MatrixTest, operatorAssignment_0x0_Success)
{
    // Arrange.
    munkres_cpp::Matrix<double> etalon_matrix {std::initializer_list<std::initializer_list<double>>() };
    munkres_cpp::Matrix<double> test_matrix {
        {0.0, 0.1, 0.2},
        {3.0, 3.1, 3.2},
        {4.0, 4.1, 4.2}
    };

    // Act.
    test_matrix = etalon_matrix;

    // Assert.
    EXPECT_PRED2 (MatrixCompare<munkres_cpp::Matrix<double> >, etalon_matrix, test_matrix);
}



TEST_F (MatrixTest, operatorAssignment_3x3_Success)
{
    // Arrange.
    munkres_cpp::Matrix<double> etalon_matrix {
        {0.0, 0.1, 0.2},
        {1.0, 1.1, 1.2},
        {2.0, 2.1, 2.2}
    };
    munkres_cpp::Matrix<double> test_matrix;

    // Act.
    test_matrix = etalon_matrix;

    // Assert.
    EXPECT_PRED2 (MatrixCompare<munkres_cpp::Matrix<double> >, etalon_matrix, test_matrix);
}



TEST_F (MatrixTest, operatorSubscript_Success)
{
    // Arrange.
    munkres_cpp::Matrix<double> test_matrix {
        {0.0, 0.1, 0.2},
        {1.0, 1.1, 1.2},
        {2.0, 2.1, 2.2}
    };

    // Act, Assert.
    EXPECT_FLOAT_EQ ( 0.0, test_matrix (0, 0) );
    EXPECT_FLOAT_EQ ( 0.1, test_matrix (0, 1) );
    EXPECT_FLOAT_EQ ( 0.2, test_matrix (0, 2) );
    EXPECT_FLOAT_EQ ( 1.0, test_matrix (1, 0) );
    EXPECT_FLOAT_EQ ( 1.1, test_matrix (1, 1) );
    EXPECT_FLOAT_EQ ( 1.2, test_matrix (1, 2) );
    EXPECT_FLOAT_EQ ( 2.0, test_matrix (2, 0) );
    EXPECT_FLOAT_EQ ( 2.1, test_matrix (2, 1) );
    EXPECT_FLOAT_EQ ( 2.2, test_matrix (2, 2) );
}
