#include <stdio.h>

int is_prime(long long number)
{
    if (number < 2) {
        return 0;
    }
    for (long long divisor = 2; divisor <= number / divisor; divisor++) {
        if (number % divisor == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int a, b;
    long long sum = 0;

    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0) {
        return 1;
    }
    if (a > b) {
        int temporary = a;
        a = b;
        b = temporary;
    }

    for (long long number = a; number <= b; number++) {
        if (is_prime(number)) {
            sum += number;
        }
    }

    printf("%lld\n", sum);
    return 0;
}
