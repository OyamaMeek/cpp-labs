//
// Created by OyamaHappa on 2026/11/19.
//
//输入大于1的自然数n，判断n是否是质数。如果是，请输出n是质数；
//如果不是，请输出n不是质数；
// 【输入样例】10
// 【输出样例】10不是质数
// 【输入样例】11
// 【输出样例】11是质数
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool is_prime(long long number)
{
    if (number < 2) {
        return false;
    }
    if (number == 2) {
        return true;
    }
    if (number % 2 == 0) {
        return 0;
    }
    for (long long divisor = 3; divisor <= sqrt(number); divisor += 2) {
        if (number % divisor == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int a=0;
    scanf("%d", &a);
    if (is_prime(a)) {
        printf("%d是质数\n", a);
    } else {
        printf("%d不是质数\n", a);
    }
    return 0;
}
