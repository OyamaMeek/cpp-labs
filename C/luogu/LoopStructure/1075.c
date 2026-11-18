//
// Created by OyamaHappa on 2026/11/18.
//
//P1075 [NOIP 2012 普及组] 质因数分解
// 已知正整数 n 是两个不同的质数的乘积，试求出两者中较大的那个质数。
// 输入格式
// 输入一个正整数 n。
// 输出格式
// 输出一个正整数 p，即较大的那个质数。
#include <stdio.h>
#include <math.h>
int is_prime(long long number)
{
    if (number < 2) {
        return 0;
    }
    if (number == 2) {
        return 1;
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
int main (void)
{
    long long num=0;
    scanf("%lld",&num);
    for (long long i = 2; i <= num; i++)
    {
        if (num % i == 0 && is_prime(i))
        {
            long long other_factor = num / i;
            if (is_prime(other_factor) && other_factor != i)
            {
                printf("%lld\n", other_factor > i ? other_factor : i);
                return 0;
            }
        }
    }
    return 0;
}
