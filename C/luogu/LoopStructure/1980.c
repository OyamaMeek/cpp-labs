// //
// // Created by OyamaHappa on 2026/11/9.
// //
// //P1980 [NOIP 2013 普及组] 计数问题
// 试计算在区间 1 到 n 的所有整数中，数字 x（0≤x≤9）共出现了多少次？
// 例如，在 1 到 11 中，即在 1,2,3,4,5,6,7,8,9,10,11 中，
// 数字 1 出现了 4 次。
// 输入格式
// 2 个整数 n,x，之间用一个空格隔开。
// 输出格式
// 1 个整数，表示 x 出现的次数。
// 输入输出样例
// 输入 #1复制
// 11 1
// 输出 #1复制
// 4
// 说明/提示
// 对于 100% 的数据，1≤n≤10
// 6
//  ，0≤x≤9。
#include <stdio.h>
int main(void)
{
    int n,x;
    scanf("%d %d",&n,&x);
    int count=0;
    for(int i=1;i<=n;i++)
    {
        int temp=i;
        while(temp>0)
        {
            if(temp%10==x)
                count++;
            temp/=10;
        }
    }
    printf("%d\n",count);
    return 0;
}