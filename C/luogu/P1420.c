//
// Created by OyamaHappa on 2026/11/18.
//
//P1420 最长连号
// 输入长度为 n 的一个正整数序列，要求输出序列中最长连号的长度。
// 连号指在序列中，由从小到大的连续自然数组成的连续子串。
// 输入格式
// 第一行，一个整数 n。
// 第二行，n 个整数 a i ，之间用空格隔开。
// 输出格式
// 一个数，最长连号的长度
#include <stdio.h>
int main(void)
{
    int n=0;
    scanf("%d",&n);
    int length=1,lenth_max=0,temp=0,temp_cin=0;
    int a[n];
    scanf("%d",&temp);
    for(int i=1; i<n; i++) {
        scanf("%d",&temp_cin);
        if(temp_cin==temp+1) {
            length++;
        } else {
            if(length>lenth_max) {
                lenth_max=length;
            }
            length=1;
        }
        temp=temp_cin;
    }
    if(length>lenth_max) {
        lenth_max=length;
    }
    printf("%d\n",lenth_max);
    return 0;
}