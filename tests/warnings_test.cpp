#include "munkres-cpp/munkres.h"
#include "munkres-cpp/utils.h"
#include <cstdlib>



int main ()
{
    {
        munkres_cpp::Matrix<double> data {
            {1.0, 2.0}
          , {3.0, 1.0}
        };
        munkres_cpp::replace_infinites (data);
        if (munkres_cpp::is_data_valid (data) ) {
            munkres_cpp::Munkres<double> solver (data);
        }
    }

    {
        munkres_cpp::Matrix<int> data {
            {1,   2}
          , {3,   1}
        };
        if (munkres_cpp::is_data_valid (data) ) {
            munkres_cpp::Munkres<int> solver (data);
        }
    }


    return EXIT_SUCCESS;
}
