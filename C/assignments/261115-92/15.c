#include <stdio.h>

int main(void)
{
    double sum = 0;

    for (int i = 1; i <= 40; i++) {
        if (i % 2 != 0) {
            sum += 1.0 / i;
        } else {
            sum -= 1.0 / i;
        }
    }

    printf("%.10g\n", sum);
    return 0;
}
