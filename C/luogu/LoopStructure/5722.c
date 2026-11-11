//
// Created by OyamaHappa on 2026/11/11.
//
//P5722 【深基4.例11】数列求和
#include <stdio.h>
int main (void)
{
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}