//
// Created by OyamaHappa on 2026/11/15.
//
//P1307 [NOIP 2011 普及组] 数字反转
// 给定一个整数 N，请将该数各个位上数字反转得到一个新数。
// 新数也应满足整数的常见形式，即除非给定的原数为零，
// 否则反转后得到的新数的最高位数字不应为零（参见样例 2）
#include <stdio.h>
int main (void)
{
    int n=0;
    scanf("%d",&n);
    int rev=0;
    if (n>=0)
    {
        while (n>0)
        {
            rev=rev*10+n%10;
            n/=10;
        }
        printf("%d\n", rev);
    }
    else
    {
        n=-n;
        while (n>0)
        {
            rev=rev*10+n%10;
            n/=10;
        }
        printf("-%d\n", rev);
    }
    return 0;
}