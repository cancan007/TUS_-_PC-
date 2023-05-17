#include <stdio.h>
#include <math.h>

int main(void)
{

    double vc1 = 0.0, ic1 = 1.0, vce = 0.0, ice = 0.0;
    double t;
    const double h = 0.001, A = 1.0 - 1001 * h, B = 1000 * h, E = 1; // Bの1=Eである
    for (t = 0.0; t <= 0.019; t = t + h)
    {
        double ic2 = exp(-1001 * t);
        double vc2 = (E / 1.001) * (1.0 - exp(-1001.0 * t));
        printf("%f\t%f\t%f\t%f\t%f\n", t * 1000, ic1, ic2, vc1, vc2); // [時間(msec), ic計算値, ic理論値, vc計算値, vc理論値]
        vc1 = (1 - 1001 * h) * vc1 + 1000 * h;
        ic1 = 1 - 1.001 * vc1;
    }

    return 0;
}
