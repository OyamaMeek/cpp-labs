//
// Created by OyamaHappa on 2026/11/15.
//
//九九乘法表
#include <stdio.h>
int main(void)
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d", j, i, i * j);
            if (j != i)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}