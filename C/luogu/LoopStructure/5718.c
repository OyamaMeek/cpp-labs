//
// Created by OyamaHappa on 2026/11/7.
//
//P5718 【深基4.例2】找最小值
// 题目描述
// 给出 n 和 n 个整数 a i求这 n 个整数中最小值是什么。
// 输入格式
// 第一行输入一个正整数 n，表示数字个数。
// 输出格式
// 输出一个非负整数，表示这 n 个非负整数中的最小值。
// 输入输出样例
// 输入 #
// 5
// 5 7 4 2 6
// 输出
// 2
#include <stdio.h>
int main(void)
{
    int n=0,min=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int num;
        scanf("%d",&num);
        if(i==1){
            min=num;
        }
        if (num<min){
            min=num;
        }
    }
    printf("%d\n",min);
    return 0;
}