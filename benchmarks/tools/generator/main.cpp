#include <cstdlib>
#include <string>
#include "../../../tests/matrix_test_utils.h"

int main (int argc, char * argv [])
{
    std::vector<munkres_cpp::Matrix<MUNKRES_CPP_VALUE_TYPE> *> matrices;

    for (int i = 1; i < argc; ++i) {
        const size_t size = std::stoi (argv [i]);
        munkres_cpp::Matrix<MUNKRES_CPP_VALUE_TYPE> * matrix = new munkres_cpp::Matrix<MUNKRES_CPP_VALUE_TYPE>;
        *matrix = generate_random_matrix<munkres_cpp::Matrix<MUNKRES_CPP_VALUE_TYPE> >(size, size);
        matrices.push_back (matrix);
    }
    write (matrices);

    return EXIT_SUCCESS;
}
