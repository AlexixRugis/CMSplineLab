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

    fp test_function_derivative1(fp x) {
        if (x >= -1 && x <= 0) {
            return 3 * x * x + 6 * x;
        }
        else if (x <= 1 && x > 0) {
            return -3 * x * x + 6 * x;
        }
        return NAN;
    }

    fp test_function_derivative2(fp x) {
        if (x >= -1 && x <= 0) {
            return 6 * x + 6;
        }
        else if (x <= 1 && x > 0) {
            return -6 * x + 6;
        }
        return NAN;
    }

    fp main_function(fp x) {
        return sin(x + 1) / (x + 1);
    }

    fp main_function_derivative1(fp x) {
        return -(sin(x + 1) + (-x-1) * cos(x+1)) / (x * x + 2 * x + 1);
    }

    fp main_function_derivative2(fp x) {
        return -((x * x + 2 * x + 1) * sin(x + 1) + 2 * (x + 1) * cos(x + 1)) / (x * x * x + 3 * x * x + 3 * x + 1);
    }

    fp oscillating_function(fp x) {
        return sin(x + 1) / (x + 1) + cos(10 * x);
    }

    fp oscillating_function_derivative1(fp x) {
        return -(sin(x + 1) + (-x - 1) * cos(x + 1)) / (x * x + 2 * x + 1) - 10 * sin(10 * x);
    }

    fp oscillating_function_derivative2(fp x) {
        return -((x * x + 2 * x + 1) * sin(x + 1) + 2 * (x + 1) * cos(x + 1)) / (x * x * x + 3 * x * x + 3 * x + 1) - 100 * cos(10 * x);
    }
}