//
// Created by OyamaHappa on 2026/11/19.
//
// 3-7-5 输入一个实数后，输出该数的绝对值．
// (要求用条件运算符　　表达式１？表达式２：表达式３)
// 测试样式1：输入：-1.33355555555
// 输出：1.333556
// 测试样式2：输入：2.2
// 输出：2.200000
#include <stdio.h>
int main (void)
{
    double a;
    scanf("%lf",&a);
    printf("%.6lf",a>0?a:-a);
    return 0;
}
