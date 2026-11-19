//
// Created by OyamaHappa on 2026/11/19.
//
// 见教材P92 第6题：从输入上1~7输出到相应的星期一~星期日；
// 输入样例1：1
// 输出样例1：星期一
// 输入样例2：8
// 输出样例2：输入有误
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    switch (n) {
        case 1:
            printf("星期一");
            break;
        case 2:
            printf("星期二");
            break;
        case 3:
            printf("星期三");
            break;
        case 4:
            printf("星期四");
            break;
        case 5:
            printf("星期五");
            break;
        case 6:
            printf("星期六");
            break;
        case 7:
            printf("星期日");
            break;
        default:
            printf("输入有误");
    }
    return 0;
}