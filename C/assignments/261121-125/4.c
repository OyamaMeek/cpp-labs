//
// Created by OyamaHappa on 2026/11/21.
//
#include <stdio.h>
int main (void)
{
    int big=1;
    int age_1=0,age_2=0,age_3=0;
    for (int year=1;year<=20;year++)
    {
        int temp=age_3;
        age_3=age_2;
        age_2=age_1;
        big+=temp;
        age_1=big;

        printf("%d\n",big);
    }
    return 0;
}