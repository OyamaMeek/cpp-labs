//
// Created by OyamaHappa on 2026/10/24.
//
#include <stdio.h>

int main(void)
{
    int num, sum = 0;
    if (scanf("%d", &num) != 1) {
        return 1;
    }
    for (; num != 0; num /= 10) {
        sum += num % 10;
    }
    if (sum < 0) {
        sum = -sum;
    }
    printf("%d\n", sum);
    return 0;
}
