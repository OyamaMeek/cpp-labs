//
// Created by OyamaHappa on 2026/11/19.
//
// P58 3、计算球的体积；输入半径，输出结果保留小数后三位；
// 例如：输入：５　　输出：V=523.583
// 注意： 1) 圆周率用符号常量PI，取值为3.1415
// 2)输出结果中有“V＝” V是大写字母。
#include <stdio.h>
int main (void)
{
    const double PI = 3.1415;//常量
    double r, V;
    scanf("%lf", &r);
    V = 4.0 / 3 * PI * r * r * r;
    printf("V=%.3f", V);
    return 0;
}