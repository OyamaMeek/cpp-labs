//
// Created by OyamaHappa on 2026/11/11.
//
// P5723 【深基4.例13】质数口袋
// 小 A 有一个质数口袋，里面可以装各个质数。
// 他从 2 开始，依次判断各个自然数是不是质数，
// 如果是质数就会把这个数字装入口袋。
// 口袋的负载量就是口袋里的所有数字之和。
// 但是口袋的承重量有限，装的质数的和不能超过 L。
// 给出 L，请问口袋里能装下几个质数？将这些质数从小往大输出，
// 然后输出最多能装下的质数的个数，数字之间用换行隔开。
// 输入格式
// 一行一个正整数 L。
// 输出格式
// 将这些质数从小往大输出，然后输出最多能装下的质数个数。
#include <stdio.h>

int main(void)
{
    int L;
    if (scanf("%d", &L) != 1 || L <= 0)
    {
        return 1;
    }

    int sum = 0;
    int count = 0;
    for (int i = 2; i <= L; i++)
    {
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (!isPrime)
        {
            continue;
        }
        if (i > L - sum)
        {
            break;
        }
        sum += i;
        count++;
        printf("%d\n", i);
    }
    printf("%d\n", count);
    return 0;
}
