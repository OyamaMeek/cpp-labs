//
// Created by OyamaHappa on 2026/11/21.
//
//P5727 【深基5.例3】冰雹猜想
#include <stdio.h>
int  main (void)
{
    int a[120]={0,0};
    int num=0;
    if (scanf("%d",&num)!=1 || num<1 || num>100)
    {
        return 1;
    }
    a[0]=num;
    int i=0;
    while(num!=1)
    {
        if (num%2==0)
        {
            num/=2;
        }
        else
        {
            num=3*num+1;
        }
        i++;
        a[i]=num;

    }
    for (int j=i; j>=0; j--)
    {
        printf("%d ",a[j]);
    }
}
