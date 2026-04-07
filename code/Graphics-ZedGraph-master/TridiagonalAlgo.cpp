#include "TridiagonalAlgo.hpp"
#include "Common.hpp"
#include <tuple>
#include <vector>


using namespace std;

namespace CMSpline {
    std::vector<fp>
        tridiagonal_algorithm(fp mu1, const std::vector<std::tuple<fp, fp, fp, fp>>& eq,
            fp mu2) {
        sz n = eq.size() + 2;

        vector<fp> c(n);
        vector<fp> alpha(n);
        vector<fp> beta(n);

        alpha[1] = 0;
        beta[1] = mu1;

        for (sz i = 1; i < n - 1; i++) {
            auto [A, C, B, Phi] = eq[i - 1];
            Phi = -Phi;
            C = -C;

            fp denom = C - A * alpha[i];

            alpha[i + 1] = B / denom;
            beta[i + 1] = (Phi + A * beta[i]) / denom;
        }

        c[n - 1] = mu2;

        for (sz i = n - 2; i >= 1; i--) {
            c[i] = alpha[i + 1] * c[i + 1] + beta[i + 1];
        }

        c[0] = mu1;

        return c;
    }
} // namespace CMSpline