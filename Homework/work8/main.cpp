//
//  main.cpp
//  work8
//
//  Created by 彭博云 on 2020/6/20.
//  Copyright © 2020 彭博云. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void OneQ(){
    int sum,big,arr[10],small;
    for (int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    big = small = sum = arr[0];
    for (int i = 1; i < 10; i++) {
        if (big < arr[i])
            big = arr[i];
        if (small > arr[i])
            small = arr[i];
        sum += arr[i];
    }
    printf("最高分：%d 最低分:%d\n平均分:%.2f\n",big,small,(sum-big-small)/8.);
}
    
//------------------------------
void TwoQ(){
    int ci,arr[16],sum=0;
    cin >> ci;
    arr[0] = 1;
    arr[1] = 2;
    for (int i = 2;i < ci;i++){
        arr[i] = (arr[i-2]+arr[i-1])*3;
    }
    for (int i = 0; i < ci; i++) {
        sum += arr[i];
    }
    printf("%d\n%d\n",arr[ci-1],sum);
}
//------------------------------
void ThreeQ(){
    int all,piao,peo[3];
    cin >> all;
    peo[0] = peo[1] = peo[2] = 0;
    for (int i = 0;i < all;i++){
        cin >> piao;
        peo[piao-1]++;
    }
    printf("1 2 3\n%d %d %d\n",peo[0],peo[1],peo[2]);
}
//------------------------------
void FourQ(){
    int n,m,t[100],temp=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    cin >> m;
    for (int i = 0; i < n; i++) {
        if (t[i] == m){
            temp ++;
        }
    }
    printf("%d\n",temp);
}
//-------------------------------
void FiveQ(){
    int n, arr[100],temp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0;i < n/2;i++){
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
}
//---------------------------------------
int main() {
    //OneQ();
    //TwoQ();
    //ThreeQ();
    //FourQ();
    FiveQ();
}
