#include "SplineInterpolation.hpp"
#include <vector>
#include "Common.hpp"
#include "Point.hpp"
#include "TridiagonalAlgo.hpp"

using namespace std;

namespace CMSpline {

    CubicSpline interpolate(const vector<CMPoint>& points, fp mu1, fp mu2) {
        CubicSpline spline;

        spline.x.resize(points.size());
        for (sz i = 0; i < points.size(); i++) {
            spline.x[i] = points[i].x;
        }

        vector<fp> h(points.size());
        for (sz i = 1; i < points.size(); i++) {
            h[i] = points[i].x - points[i - 1].x;
        }

        vector<tuple<fp, fp, fp, fp>> equations_1_n_1((int)points.size() - 2);
        for (sz i = 0; i < equations_1_n_1.size(); i++) {
            sz index = i + 1;

            fp coef_1 = h[index];
            fp coef_2 = 2.0 * (h[index] + h[index + 1]);
            fp coef_3 = h[index + 1];
            fp coef_4 = 6.0 * ((points[index + 1].y - points[index].y) / h[index + 1] - (points[index].y - points[index - 1].y) / h[index]);

            equations_1_n_1[i] = make_tuple(coef_1, coef_2, coef_3, coef_4);
        }

        spline.c = tridiagonal_algorithm(mu1, equations_1_n_1, mu2);
        spline.a.resize(spline.c.size());
        spline.b.resize(spline.c.size());
        spline.d.resize(spline.c.size());

        for (sz i = 1; i < spline.a.size(); i++) {
            spline.a[i] = points[i].y;
        }

        for (sz i = 1; i < spline.b.size(); i++) {
            constexpr fp coef1_3 = 1.0 / 3.0;
            constexpr fp coef1_6 = 1.0 / 6.0;

            spline.b[i] = (points[i].y - points[i - 1].y) / h[i]
                + spline.c[i] * h[i] * coef1_3
                + spline.c[i - 1] * h[i] * coef1_6;
        }

        for (sz i = 1; i < spline.d.size(); i++) {
            spline.d[i] = (spline.c[i] - spline.c[i - 1]) / h[i];
        }

        return spline;
    }
}