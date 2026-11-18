//
// Created by OyamaHappa on 2026/11/18.
//
//P5724 【深基4.习5】求极差 / 最大跨度值 / 最大值和最小值的差
// 给出 n 和 n 个整数 a i ，求这 n 个整数中的极差是什么。
// 极差的意思是一组数中的最大值减去最小值的差。
// 输入格式
// 第一行输入一个正整数 n，表示整数个数。
// 第二行输入 n 个整数 a 1,a 2 a n ，以空格隔开。
// 输出格式
// 输出一个整数，表示这 n 个整数的极差。
#include <stdio.h>
int main(void)
{
    int num=0;
    scanf("%d",&num);
    int first=0;
    scanf("%d",&first);
    int min=first;
    int max=first;
    for(int i=1;i<num;i++){
        int temp=0;
        scanf("%d",&temp);
        if(temp>max) max=temp;
        if(temp<min) min=temp;
    }
    printf("%d\n",max-min);
    return 0;
}