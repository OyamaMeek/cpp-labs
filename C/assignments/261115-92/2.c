//
// Created by OyamaHappa on 2026/11/15.
//
#include <math.h>
#include <stdio.h>

int main(void)
{
    double x, y;

    if (scanf("%lf", &x) != 1 || !isfinite(x)) {
        return 1;
    }

    if (x >= 0 && x <= 8) {
        y = x + 2 * x * x + 10;
    } else {
        y = x - 3 * x * x * x - 9;
    }

    if (!isfinite(y)) {
        return 1;
    }
    printf("%.10g\n", y);
    return 0;
}
