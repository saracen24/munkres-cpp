#include <hayai.hpp>
#include <vector>

#include "munkres-cpp/munkres.h"
#include "../../tests/matrix_test_utils.h"



std::vector<munkres_cpp::MUNKRES_CPP_MATRIX_TYPE<MUNKRES_CPP_VALUE_TYPE> *> matrices;

size_t i {0};



class MunkresFixture : public ::hayai::Fixture
{
    public:
        MunkresFixture ()
            : matrix (1, 1)
        {
        }

        void SetUp () override
        {
            matrix = * matrices [i];
        }

        munkres_cpp::MUNKRES_CPP_MATRIX_TYPE<MUNKRES_CPP_VALUE_TYPE> matrix;
};



BENCHMARK_F (MunkresFixture, Solve, 5000, 1)
{
    munkres_cpp::Munkres<MUNKRES_CPP_VALUE_TYPE> munkres (matrix);
}



int main (int, char **)
{
    read (matrices);

    hayai::ConsoleOutputter consoleOutputter;
    hayai::Benchmarker::AddOutputter (consoleOutputter);
    while (i < matrices.size () ) {
        hayai::Benchmarker::RunAllTests ();
        ++i;
    }
}
