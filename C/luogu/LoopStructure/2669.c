//
// Created by OyamaHappa on 2026/11/11.
//
//P2669 [NOIP 2015 普及组] 金币
// 国王将金币作为工资，发放给忠诚的骑士。
// 第一天，骑士收到一枚金币；之后两天（第二天和第三天），
// 每天收到两枚金币；之后三天（第四、五、六天），每天收到三枚金币；
// 之后四天（第七、八、九、十天），每天收到四枚金币……；
// 这种工资发放模式会一直这样延续下去：
// 当连续 n 天每天收到 n 枚金币后，骑士会在之后的连续 n+1 天里，
// 每天收到 n+1 枚金币。
// 请计算在前 k 天里，骑士一共获得了多少金币。
#include <stdio.h>
int main (void)
{
    int days=0;
    scanf("%d",&days);
    int sum=0;
    int day_sum=0;
    int day_add=1,day_temp=0;
    for (int i=1;i<=days;i++){
        if(day_sum-day_temp==day_add){
            day_temp = day_sum;
            day_add++;
        }
        sum+=day_add;
        day_sum++;
        }
    printf("%d",sum);
}