//
// Created by OyamaHappa on 2026/11/15.
//
//水仙花数
#include <stdio.h>
int main(void)
{
    int number=100;

    while ( number <1000) {
        int d=number;
        int e=number;
        int a = e % 10; // 取出最低位
        e /= 10;           // 丢弃最低位
        int b = e % 10;
        e /= 10;
        int c = e % 10;
        if (d == a * a * a + b * b * b + c * c * c)
            printf("%d\n", number);
        number += 1;
    }
    return 0;
}