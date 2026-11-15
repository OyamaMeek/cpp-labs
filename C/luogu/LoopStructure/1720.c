//
// Created by OyamaHappa on 2026/11/15.
//
//P1720 月落乌啼算钱（斐波那契数列）
#include <stdio.h>
int main(void)
{
    int n=0;
    scanf("%d", &n);
    double temp1=1.0,temp2=1.0,temp3=0.0;
    for (int i=3;i<=n;i++)
    {
        temp3=temp1+temp2;
        temp1=temp2;
        temp2=temp3;
    }
    printf("%.2f\n", temp3);
    return 0;
}