//
// Created by OyamaHappa on 2026/11/19.
//
// 12. (程序题)
// 见教材P94 编程题 第15题
// 求1-1/2+1/3-1/4+1/5-1/6+......的前40项和
// 【注意：40由scanf("%d",&n);输入】; (保留小数点后两位)
// 【输入样例】
// 40
// 【输出样例】
// 0.68
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    double sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += 1.0 / i;
        } else {
            sum -= 1.0 / i;
        }
    }

    printf("%.2f\n", sum);
    return 0;
}
