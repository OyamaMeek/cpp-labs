//
// Created by OyamaHappa on 2026/10/30.
//
// Problem Description
// I have a very simple problem for you. Given two integers A and B, your job is to calculate the Sum of A + B.
//
//
// Input
// The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line consists of two positive integers, A and B. Notice that the integers are very large, that means you should not process them by using 32-bit integer. You may assume the length of each integer will not exceed 1000.
//
//
// Output
// For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line is the an equation "A + B = Sum", Sum means the result of A + B. Note there are some spaces int the equation. Output a blank line between two test cases.
//
//
// Sample Input
// 2
// 1 2
// 112233445566778899 998877665544332211
//
//
// Sample Output
// Case 1:
// 1 + 2 = 3
//
// Case 2:
// 112233445566778899 + 998877665544332211 = 1111111111111111110
#include <iostream>
using namespace std;

int main()
{
    int a=0;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        string A,B;
        cin>>A>>B;
        int lenA=A.length();
        int lenB=B.length();
        int maxLen=max(lenA,lenB);
        int sum[maxLen+1];
        for(int j=0;j<=maxLen;j++)
        {
            sum[j]=0;
        }
        for(int j=0;j<lenA;j++)
        {
            sum[maxLen-j]+=A[lenA-1-j]-'0';
        }
        for(int j=0;j<lenB;j++)
        {
            sum[maxLen-j]+=B[lenB-1-j]-'0';
        }
        for(int j=maxLen;j>0;j--)
        {
            if(sum[j]>=10)
            {
                sum[j-1]+=sum[j]/10;
                sum[j]=sum[j]%10;
            }
        }
        cout<<"Case "<<i<<":"<<endl;
        cout<<A<<" + "<<B<<" = ";
        if(sum[0]!=0)
            cout<<sum[0];
        for(int j=1;j<=maxLen;j++)
            cout<<sum[j];
        cout<<endl;
    }
    return 0;
}