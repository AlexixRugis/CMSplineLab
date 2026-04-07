#pragma once
#include "Common.hpp"
#include "Point.hpp"
#include <vector>

namespace CMSpline {

    struct CubicSpline {
        // Cubic spline format:
        // 
        // S(x) = {S_i(x) = a_i + b_i*(x - x_i) + (c_i/2)*(x-x_i)^2 + (d_i/6)*(x-x_i)^3, x in [x_(i-1), x_i], i = 1,...,n }
        //

        std::vector<fp> x; // Points x_0, ..., x_n
        std::vector<fp> a; // Coefs a_1, ..., a_n
        std::vector<fp> b; // Coefs b_1, ..., b_n
        std::vector<fp> c; // Coefs c_1, ..., c_n
        std::vector<fp> d; // Coefs d_1, ..., d_n

        sz get_n() const { return static_cast<sz>(x.size()); }
    };

    // Get cubic spline from points and boundary conditions mu1, mu2.
    // Points must be sorted by increasing of their x coordinate and all x coords must be different.
    CubicSpline interpolate(const std::vector<CMPoint>& points, fp mu1, fp mu2);
}
