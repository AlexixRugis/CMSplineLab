#pragma once
#include "Common.hpp"
#include <tuple>
#include <vector>


namespace CMSpline {
    std::vector<fp>
        tridiagonal_algorithm(fp mu1, const std::vector<std::tuple<fp, fp, fp, fp>>& eq,
            fp mu2);
}
