#include <celero/Celero.h>
#include <vector>

#include "munkres-cpp/munkres.h"
#include "../../../tests/matrix_test_utils.h"



std::vector<munkres_cpp::Matrix<double> *> matrices;

size_t i {0};



class MunkresFixture : public celero::TestFixture
{
    public:
        void setUp (int64_t) override
        {
            matrix = *matrices [i];
        }

        munkres_cpp::Matrix<double> matrix;
};



BASELINE_F (Munkres, Solve, MunkresFixture, 5000, 1)
{
     munkres_cpp::Munkres<double> munkres (matrix);
}



int main (int argc, char * argv [])
{
    read (matrices);

    while (i < matrices.size () ) {
        celero::Run (argc, argv);
        ++i;
    }
}
