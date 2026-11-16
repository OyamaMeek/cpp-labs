#include <limits.h>
#include <stdio.h>

int main(void)
{
    int n;
    long long product = 1;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        long long number;
        if (scanf("%lld", &number) != 1) {
            return 1;
        }
        if (number % 2 != 0) {
            if ((product > 0 && number > 0 && product > LLONG_MAX / number) ||
                (product > 0 && number < 0 && number < LLONG_MIN / product) ||
                (product < 0 && number > 0 && product < LLONG_MIN / number) ||
                (product < 0 && number < 0 && product < LLONG_MAX / number)) {
                return 1;
            }
            product *= number;
        }
    }

    printf("%lld\n", product);
    return 0;
}
