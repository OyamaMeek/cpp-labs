#include <math.h>
#include <stdio.h>

int main(void)
{
    double sum = 0, minimum = 0, maximum = 0;

    for (int i = 0; i < 10; i++) {
        double score;
        if (scanf("%lf", &score) != 1 || !isfinite(score)) {
            return 1;
        }
        if (i == 0 || score < minimum) {
            minimum = score;
        }
        if (i == 0 || score > maximum) {
            maximum = score;
        }
        sum += score;
    }

    double average = (sum - minimum - maximum) / 8;
    if (!isfinite(average)) {
        return 1;
    }
    printf("%.10g\n", average);
    return 0;
}
