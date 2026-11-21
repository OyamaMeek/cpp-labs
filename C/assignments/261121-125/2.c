//
// Created by OyamaHappa on 2026/11/21.
//
#include <stdio.h>
int main (void)
{
    int a[20]={0,0};
   // while (scanf("%d",&a[0])!=EOF)
    // {
    //
    // }
    int i=0;
    int n=0;
    scanf("%d",&n);
    if (n<=20){
        for (i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    }
    else{
        for (i=0;i<20;i++)
        {
            scanf("%d",&a[i]);
        }
    }
    int min=0;
    for (int j=0;j<i;j++)
    {
        if (a[j]<a[min])
        {
            min=j;
        }
    }
    int temp=a[0];
    a[0]=a[min];
    a[min]=temp;
    for (int j=0;j<i;j++)
    {
        printf("%d ",a[j]);
    }
}
