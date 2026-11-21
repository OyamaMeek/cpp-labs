//
// Created by OyamaHappa on 2026/11/21.
//
#include <stdio.h>
#include <math.h>
int main (void)
{
    int a[10];
    double average=0,min=0,min_num=0;
    for (int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        average+=a[i];
    }
    average/=10;
    for (int i=0;i<10;i++)
    {
        if (fabs(a[i]-average)<min || i==0)
        {
            min=fabs(a[i]-average);
            min_num=a[i];
        }
    }
    printf("%f\n", min_num);

    return 0;
}