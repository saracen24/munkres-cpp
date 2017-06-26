#include <benchmark/benchmark.h>
#include <vector>

#include "matrixutils.h"
#include "munkres-cpp/munkres.h"



std::vector<munkres_cpp::Matrix<double> *> matrices;

static void MatrixNumber (benchmark::internal::Benchmark * b)
{
    read<double>(matrices);
    for (int i = 0; i < static_cast <int> (matrices.size () ); ++i) {
        b->Arg (i);
    }
}



static void BM_solve (benchmark::State & state)
{
    state.PauseTiming ();
    while (state.KeepRunning () ) {
        auto matrix = *matrices [state.range (0)];
        state.ResumeTiming ();
        munkres_cpp::Munkres<double> munkres (matrix);
        state.PauseTiming ();
    }
}
BENCHMARK (BM_solve)->Apply (MatrixNumber);



int main (int argc, char * argv [])
{
    benchmark::Initialize (&argc, argv);
    benchmark::RunSpecifiedBenchmarks ();
}
