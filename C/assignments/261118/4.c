//
// Created by OyamaHappa on 2026/11/19.
//
// 3-7-9 编写程序，将d天h小时m分钟换算成分钟。，输入d、h、m
// ，输出换算的分钟数。
// 输入： 3:5:50
// 输出： sum=4670
#include<stdio.h>
int main(void)
{
    int d, h, m;
    scanf("%d:%d:%d", &d, &h, &m);
    printf("sum=%d", d * 24 * 60 + h * 60 + m);
    return 0;
}