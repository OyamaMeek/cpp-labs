//
// Created by OyamaHappa on 2026/10/30.
//
//#include <stdio.h>
// Problem Description
// Given a sequence a[1],a[2],a[3]......a[n], your job is to calculate the max sum of a sub-sequence. For example, given (6,-1,5,4,-7), the max sum in this sequence is 6 + (-1) + 5 + 4 = 14.
//
//
// Input
// The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line starts with a number N(1<=N<=100000), then N integers followed(all the integers are between -1000 and 1000).
//
//
// Output
// For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line contains three integers, the Max Sum in the sequence, the start position of the sub-sequence, the end position of the sub-sequence. If there are more than one result, output the first one. Output a blank line between two cases.
//
//
// Sample Input
// 2
// 5 6 -1 5 4 -7
// 7 0 6 -1 1 -6 7 -5
//
//
// Sample Output
// Case 1:
// 14 1 4
//
// Case 2:
// 7 1 6

#include <iostream>
using namespace std;

int main()
{
    int num=0;

    cin>>num;
    for(int i=1;i<=num;i++)
    {
        int n=0;
        cin>>n;

        int a[n+1];
        for(int j=1;j<=n;j++)
        {
            cin>>a[j];

        }
        int maxSum = a[1];
        int start = 1;
        int end = 1;
        for(int j=1;j<=n;j++)
        {
                for(int k=j;k<=n;k++)
                {
                    int sum=0;
                    for(int l=j;l<=k;l++)
                    {
                        sum=sum+a[l];
                    }
                    if(sum>maxSum)
                    {
                        maxSum=sum;
                        start=j;
                        end=k;
                    }
                }

        }


        cout << "Case " << i << ":" <<endl;
        cout<<maxSum<<" "<<start<<" "<<end<<endl;
        cout<<endl;


    }





}
