//
// Created by OyamaHappa on 2026/10/17.
//
#include <stdio.h>

int main(void)
{
    int num;
    if (scanf("%d", &num) != 1) {
        return 1;
    }
    printf("%lld\n", 1LL * num * num);
    return 0;
}
