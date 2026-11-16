#include <math.h>
#include <stdio.h>

int main(void)
{
    double a, b, c;

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 ||
        !isfinite(a) || !isfinite(b) || !isfinite(c)) {
        return 1;
    }
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        printf("Cannot form a triangle!\n");
        return 0;
    }

    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    if (!isfinite(area)) {
        return 1;
    }
    printf("%.10g\n", area);
    return 0;
}
