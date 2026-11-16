#include <stdio.h>

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
        int is_prime = number >= 2;
        for (int divisor = 2; divisor <= number / divisor; divisor++) {
            if (number % divisor == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            sum += number;
        }
    }

    printf("%lld\n", sum);
    return 0;
}
