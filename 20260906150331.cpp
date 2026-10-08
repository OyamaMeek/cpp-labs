//
// Created by OyamaHappa on 2026/9/6.
//

//20260906150331
//水仙花数

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number=100;

    while ( number <1000) {
        int d=number;
        int e=number;
        int a = e % 10; // 取出最低位
        e /= 10;           // 丢弃最低位
        int b = e % 10;
        e /= 10;
        int c = e % 10;
        if (d == a * a * a + b * b * b + c * c * c)
            cout << d << endl;
    number += 1;

    }


    return 0;
}