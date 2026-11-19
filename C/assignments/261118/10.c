//
// Created by OyamaHappa on 2026/11/19.
//
//见教材P92 编程题 第14题  输入两个三位数m和n，
//输出m到n之间水仙花的数数量；
// 【输入样例1】
// 100 999
// 【输出样例1】
// 4
// 【输入样例2】
// 100 300
// 【输出样例2】
// 1

#include <stdio.h>
int main(void)
{
    int start=0;
    int end=0;
    int count = 0;
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++)
    {

        int a = i/100;
        int b = (i/10)%10;
        int c = i%10;
        if(a*a*a+b*b*b+c*c*c==i)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}