#include <math.h>
#include <stdio.h>

int main(void)
{
    int n;
    int negative = 0, zero = 0, positive = 0;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        double number;
        if (scanf("%lf", &number) != 1 || !isfinite(number)) {
            return 1;
        }
        if (number < 0) {
            negative++;
        } else if (number == 0) {
            zero++;
        } else {
            positive++;
        }
    }

    printf("%d %d %d\n", negative, zero, positive);
    return 0;
}
