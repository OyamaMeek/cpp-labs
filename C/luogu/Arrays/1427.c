//
// Created by OyamaHappa on 2026/11/21.
//
//P1427 小鱼的数字游戏
#include <stdio.h>
int main (void)
{
    int num=0;
    int a[100];
    int i=0;
    while (scanf("%d",&num) && num != 0)
    {
        a[i]=num;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
    return 0;
}