//
// Created by OyamaHappa on 2026/11/19.
//
// 见教材P92 编程题 第12题
// 10个评委评分，除掉一个最高，除掉一个最低分，
// 求选手的平均分（保留到小数点后两位）！
// 【输入样例1】
// 9.9 9.8 9.2 8.5 9.5 9.6 9.7 8 9.2 9.3
// 【输出样例】
// 平均分为9.35
#include <math.h>
#include <stdio.h>

int main(void)
{
    double sum = 0, minimum = 0, maximum = 0;

    for (int i = 0; i < 10; i++) {
        double score;
        if (scanf("%lf", &score) != 1 || !isfinite(score)) {
            return 1;
        }
        if (i == 0 || score < minimum) {
            minimum = score;
        }
        if (i == 0 || score > maximum) {
            maximum = score;
        }
        sum += score;
    }

    double average = (sum - minimum - maximum) / 8;
    if (!isfinite(average)) {
        return 1;
    }
    printf("平均分为%.2f\n", average);
    return 0;
}
