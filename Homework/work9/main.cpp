//
//  main.cpp
//  work9
//
//  Created by 彭博云 on 2020/6/30.
//  Copyright © 2020 彭博云. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void OneQ(){
    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= i; j++){
            printf("%d*%d=%d ", j, i, i*j);
        }
        printf("\n");
    }

}
//------------------------------
void TwoQ(){
    int arr[5][5], m, n;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> arr[i][j];
        }
    }
    cin>>m>>n;
    for(int i=0;i<5;i++){
        int temp=arr[i][m-1];
        arr[i][m-1]=arr[i][n-1];
        arr[i][n-1]=temp;
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        cout << endl;
    }
}
//------------------------------
void ThreeQ(){
    int temp[10][10];
    for(int row=0 ;row < 10;row++){
        for (int column = 0;column <= row;column++) {
            if(column == 0 || row == column){
                temp[row][column] = 1;
            }else{
                temp[row][column] = temp[row-1][column]+temp[row-1][column-1];
            }
            printf("%d ",temp[row][column]);        }
        cout << endl;
    }

}
//-----------------------------
void FourQ(){
    for (int i = 4;i>=0;i--){
        for(int j = 1;j < 6;j++){
            if(j <= i)
                cout << "0";
            else
                cout << "*";
        }
        cout << endl;
    }
}
//-------------------------------
void FiveQ(){
    int temp=5;
    for(int i=0;i < 9;i++){
        for (int j=0;j<temp;j++){
            cout << "*";
        }
        if (i > 3)
            temp ++;
        else
            temp --;
        cout << endl;
    }
}
//---------------------------------------
int main() {
    //OneQ();
    TwoQ();
    //ThreeQ();
    //FourQ();
    //FiveQ();
}
