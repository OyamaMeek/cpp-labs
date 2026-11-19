//
// Created by OyamaHappa on 2026/11/19.
//
//见教材P95 编程题 第18题
//输出99乘法表(下三角)
#include <stdio.h>
int main (void)
{
    for(int i=1;i<=9;i++){
        for(int j=1;j<=i;j++){
            printf("%d*%d=%d ",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}