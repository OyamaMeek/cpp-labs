//
// Created by OyamaHappa on 2026/11/9.
//
//P1009 [NOIP 1998 普及组] 阶乘之和
#include <stdio.h>
int main (void)
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int fac=1;
    for(int i=1;i<=n;i++)
    {
        fac*=i;
        sum+=fac;
    }
    printf("%d\n",sum);
    return 0;
}