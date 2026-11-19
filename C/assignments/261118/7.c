//
// Created by OyamaHappa on 2026/11/19.
//
//见教材P92 编程题 第9题 输入一个整数，求这个整数的各个数字的和。
// 输入样例1：12345
// 输出样例1：12345各数字之和为15
#include <stdio.h>

int main(void)
{
    long long number;
    long long original_number;
    int sum = 0;

    if (scanf("%lld", &number) != 1 || number <= 0) {
        return 1;
    }
    original_number = number;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("%lld各数字之和为%d\n", original_number, sum);
    return 0;
}
