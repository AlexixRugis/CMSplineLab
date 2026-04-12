#include "Common.hpp"
#include <cmath>

using namespace std;

namespace CMSpline {

    fp test_function(fp x) {
        if (x >= -1 && x <= 0) {
            return x * x * x + 3 * x * x;
        }
        else if (x <= 1 && x > 0) {
            return - (x * x * x) + 3 * x * x;
        }
        return NAN;
    }

    fp main_function(fp x) {
        return sin(x + 1) / (x + 1);
    }

    fp oscillating_function(fp x) {
        return sin(x + 1) / (x + 1) + cos(10 * x);
    }
}