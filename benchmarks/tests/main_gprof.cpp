#include <vector>

#include "munkres-cpp/munkres.h"
#include "../../../tests/matrix_test_utils.h"



int main (int /*argc*/, char * /*argv*/ [])
{
    std::vector<munkres_cpp::Matrix<double> *> matrices;
    read (matrices);


    for (size_t i = 0; i < matrices.size (); ++i) {
        std::cout << "Test case " << i + 1 << " from " << matrices.size () << std::endl;
        auto matrix = *matrices [i];
        munkres_cpp::Munkres<double> munkres (matrix);
    }
}
