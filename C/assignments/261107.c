//
// Created by OyamaHappa on 2026/11/7.
//p92-4-12
//青年歌手大奖赛中,10 个评委给参赛选手打分。
//选手得分规则为去掉一个最高分和一个最低分,然后计算平均得分。
//计算并输出选手张三的得分(注意:如果最高分或最低分有多个相同时,
//去掉其中一个)。
#include <stdio.h>
int main ()
{
    double scores[10];
    double average=0;
    int max=1, min=1;
    for (int i=0;i<10;i++){
        scanf("%lf",&scores[i]);
        if (scores[i]>max)
        {
            max=scores[i];
        }
        if (scores[i]<min)
        {
            min=scores[i];
        }
        average+=scores[i];
    }
    average=(average-max-min)/8;
    printf("%.2lf",average);
}