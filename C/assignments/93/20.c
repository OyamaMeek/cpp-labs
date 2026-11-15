//
// Created by OyamaHappa on 2026/11/15.
//
#include <stdio.h>
int main (void)
{
    int i=0,j=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=(4-i);j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {

            printf("*");
        }
        printf("\n");
    }

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=(4-i);j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {

            printf("*");
        }
        printf("\n");

    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=(4-i);j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {

            printf("*");
        }
        printf("\n");

    }
    return 0;
}