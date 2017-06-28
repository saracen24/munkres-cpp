#include <hayai.hpp>
#include <vector>

#include "munkres-cpp/munkres.h"
#include "../../../tests/matrix_test_utils.h"



std::vector<munkres_cpp::Matrix<double> *> matrices;

size_t i {0};



class MunkresFixture : public ::hayai::Fixture
{
    public:
        void SetUp () override
        {
            matrix = *matrices [i];
        }

        munkres_cpp::Matrix<double> matrix;
};



BENCHMARK_F (MunkresFixture, Solve, 5000, 1)
{
    munkres_cpp::Munkres<double> munkres (matrix);
}



int main (int /*argc*/, char * /*argv*/ [])
{
    read (matrices);

    hayai::ConsoleOutputter consoleOutputter;
    hayai::Benchmarker::AddOutputter (consoleOutputter);
    while (i < matrices.size () ) {
        hayai::Benchmarker::RunAllTests ();
        ++i;
    }
}
