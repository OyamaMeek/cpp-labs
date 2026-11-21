//
// Created by OyamaHappa on 2026/11/21.
//
//P5728 【深基5.例5】旗鼓相当的对手
#include <stdio.h>
int main (void)
{
    int n=0,num=0;
    scanf("%d",&n);
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
    }
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           if(a[i][0]-a[j][0]<=5 && a[i][0]-a[j][0]>=-5&&i!=j)
           {
               if(a[i][1]-a[j][1]<=5 && a[i][1]-a[j][1]>=-5)
               {
                   if(a[i][2]-a[j][2]<=5 && a[i][2]-a[j][2]>=-5)
                   {
                       if ((a[i][0]+a[i][1]+a[i][2]-a[j][0]-a[j][1]-a[j][2])>=-10 && (a[i][0]+a[i][1]+a[i][2]-a[j][0]-a[j][1]-a[j][2])<=10)
                       {
                           num++;
                       }

                   }
               }
           }
       }
    }
    printf("%d\n",num/2);
    return 0;
}