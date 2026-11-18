//
// Created by OyamaHappa on 2026/11/18.
//
//3-7-4 输入三角形的底和高，求三角形的面积．保留到小数后两位．
// 例如输入：２　２　输出s=2.00
#include <stdio.h>
int main (void)
{
    double a, b, s;
    scanf("%lf %lf", &a, &b);
    s = a * b / 2;
    printf("s=%.2f", s);
    return 0;
}
