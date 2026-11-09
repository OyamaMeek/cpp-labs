//
// Created by OyamaHappa on 2026/11/9.
//
//P1009 [NOIP 1998 普及组] 阶乘之和
#include <stdio.h>
int main (void)
{
    int n;
    scanf("%d",&n);
    int sum[100]={0};
    int fac[100]={1};
    for(int i=1;i<=n;i++)
    {
        int carry=0;
        for(int j=0;j<100;j++)
        {
            fac[j]=fac[j]*i+carry;
            carry=fac[j]/10;
            fac[j]%=10;
        }
        carry=0;
        for(int j=0;j<100;j++)
        {
            sum[j]+=fac[j]+carry;
            carry=sum[j]/10;
            sum[j]%=10;
        }
    }
    int j=99;
    while(j>0 && sum[j]==0)
        j--;
    for(;j>=0;j--)
        printf("%d",sum[j]);
    printf("\n");
    return 0;
}
