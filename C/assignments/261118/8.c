//
// Created by OyamaHappa on 2026/11/19.
//
// 输入整数n和相应的n个整数，求出正数的个数和负数的个数以及0的个数。
// 【输入样例1】
// 10 -1 0 1 -2 2 3 4 5 -7 9
// 【输出样例1】
// 正数个数：6
// 0的个数：1
// 负数的个数：3
// 【输入样例2】
// 8 3 -3 4 -4 5 -5 0 0
// 【输出样例2】
// 正数个数：3
// 0的个数：2
// 负数的个数：3
#include <math.h>
#include <stdio.h>

int main(void)
{
    int n;
    int negative = 0, zero = 0, positive = 0;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        double number;
        if (scanf("%lf", &number) != 1 || !isfinite(number)) {
            return 1;
        }
        if (number < 0) {
            negative++;
        } else if (number == 0) {
            zero++;
        } else {
            positive++;
        }
    }
    printf("正数个数：%d\n", positive);
    printf("0的个数：%d\n", zero);
    printf("负数的个数：%d\n", negative);


    //printf("%d %d %d\n", negative, zero, positive);
    return 0;
}
