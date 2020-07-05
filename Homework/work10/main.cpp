//
//  main.cpp
//  work10
//
//  Created by 彭博云 on 2020/7/5.
//  Copyright © 2020 彭博云. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void OneQ(){
    int arr[3][4]={80,61,59,85,75,65,63,87,92,71,70,90};
    double temp=0,sum=0,average=0;
    for(int i = 0;i < 3;i++){
        sum = 0;
        for(int j = 0;j < 4;j++)
            sum += arr[i][j];
        average = sum / 4;
        printf("%.2f ",average);
        temp += average;
    }
    printf("%.2f\n",temp);
}
//------------------------------
void TwoQ(){
    int arr[3][4],a[3]={0,0,0};
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 4;j++){
            cin >> arr[i][j];
            if(arr[i][j] > a[i])
                a[i] = arr[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
        printf("%d ",a[i]);
}
//------------------------------
void ThreeQ(){
    int row,rank,big=0,small=0;
    cin >> row >> rank;
    int arr[row][rank];
    for(int i=0;i < row;i++){
        for(int j=0;j < rank;j++){
            cin >> arr[i][j];
            if (i ==0 && j == 0)
                small = big = arr[i][j];
            else{
                if(big < arr[i][j])
                    big = arr[i][j];
                if(small > arr[i][j])
                    small = arr[i][j];
            }
        }
    }
    printf("%d\n",big-small);
}
//-----------------------------
void FourQ(){
    int a[3][4],m[4];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cin >> a[i][j];
            if(i == 0)
                m[j] = a[i][j];
        }
    }
    for(int i = 0;i<3;i++){
        for (int j = 0; j < 4; j++) {
            if(m[j]>a[i][j])
            m[j] = a[i][j];
        }
    }
    for (int j = 0; j < 4; j++)
        printf("%d ",m[j]);
}
//-------------------------------
void FiveQ(){
    int arr[4][4],temp=0;
    for (int k = 0; k < 4; k++){
        for (int i = 0; i < 4; i++)
            cin >> arr[k][i];
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 2; j++){
            if(arr[i][j] != arr[i][3-j]){
                temp = 1;
                break;
            }
        }
        if (temp==1)
            break;
    }
    if(temp == 0)
        printf("yes\n");
    else
        printf("no\n");

}
//---------------------------------------
int main() {
    //OneQ();
    //TwoQ();
    //ThreeQ();
    FourQ();
    //FiveQ();
}

