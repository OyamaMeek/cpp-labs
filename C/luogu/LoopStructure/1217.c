//
// Created by OyamaHappa on 2026/11/11.
//
//P1217 [USACO1.5] 回文质数 Prime Palindromes
// 因为 151 既是一个质数又是一个回文数（从左到右和从右到左是看一样的），
// 所以 151 是回文质数。
//
// 写一个程序来找出范围 [a,b](5≤a<b≤100,000,000)
// （一亿）间的所有回文质数。
// 输入格式
// 第一行输入两个正整数 a 和 b。
// 输出格式
// 输出一个回文质数的列表，一行一个。
#include <stdio.h>
#include <stdbool.h>

static bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int divisor = 2; divisor * divisor <= n; divisor++)
    {
        if (n % divisor == 0)
        {
            return false;
        }
    }
    return true;
}

static int makeOddPalindrome(int prefix)
{
    int palindrome = prefix;
    for (int value = prefix / 10; value > 0; value /= 10)
    {
        palindrome = palindrome * 10 + value % 10;
    }
    return palindrome;
}

int main(void)
{
    int a, b;
    if (scanf("%d %d", &a, &b) != 2 || a < 5 || b > 100000000 || a >= b)
    {
        return 1;
    }

    for (int palindrome = 5; palindrome <= 7; palindrome += 2)
    {
        if (palindrome >= a && palindrome <= b)
        {
            printf("%d\n", palindrome);
        }
    }

    // 偶数位回文数都能被 11 整除，只有 11 可能是素数。
    if (a <= 11 && 11 <= b)
    {
        printf("11\n");
    }

    // 生成三位、五位和七位回文数。prefix 的位数决定回文数的总位数。
    for (int prefix = 10; prefix <= 99999; prefix++)
    {
        int palindrome = makeOddPalindrome(prefix);
        int digits = 0;
        for (int value = prefix; value > 0; value /= 10)
        {
            digits++;
        }

        if (digits != 2 && digits != 3 && digits != 4 && digits != 5)
        {
            continue;
        }
        if (palindrome >= a && palindrome <= b && isPrime(palindrome))
        {
            printf("%d\n", palindrome);
        }
    }

    return 0;
}
