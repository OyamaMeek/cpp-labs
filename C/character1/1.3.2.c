//
// Created by OyamaHappa on 2026/10/17.
//
#include <stdio.h>

int main(void)
{
    int a, b, min;
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }
    if (a < b) {
        min = a;
    } else {
        min = b;
    }
    printf("%d\n", min);
    return 0;
}
