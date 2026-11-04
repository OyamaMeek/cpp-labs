//
// Created by OyamaHappa on 2026/11/4.
//
//冒泡排序
#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {64, 34, 25, 12, 22, 11, 90};
    int end=sizeof(arr)/sizeof(arr[0])-1;
    for(int i=0;i<end;i++){
        for(int j=0;j<end-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            for(int k=0;k<7;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}