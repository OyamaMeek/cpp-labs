//
// Created by OyamaHappa on 2026/11/9.
//
//P1035 [NOIP 2002 普及组] 级数求和
#include <stdio.h>
int main (void)
{
    int n;
    scanf("%d",&n);
    double sum=0;
    int i=1;
    int times=0;
    while (1){
        sum+=1.0/i;
        i++;
        times++;
        if(sum>n) break;
    }
printf("%d",times);
    return 0;
}