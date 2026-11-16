#include <math.h>
#include <stdio.h>

int main(void)
{
    double x, y, result;

    if (scanf("%lf %lf", &x, &y) != 2 || !isfinite(x) || !isfinite(y)) {
        return 1;
    }

    if (x >= 0 && y >= 0) {
        result = x * x + y * y;
    } else if (x < 0 && y < 0) {
        result = x * x - y * y;
    } else if (x >= 0 && y < 0) {
        result = x + y;
    } else {
        result = x - y;
    }

    if (!isfinite(result)) {
        return 1;
    }
    printf("%.10g\n", result);
    return 0;
}
