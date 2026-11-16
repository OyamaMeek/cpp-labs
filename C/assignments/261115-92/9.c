#include <stdio.h>

int main(void)
{
    long long number;
    int sum = 0;

    if (scanf("%lld", &number) != 1 || number <= 0) {
        return 1;
    }
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("%d\n", sum);
    return 0;
}
