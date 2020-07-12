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
    int n;
    char a=0,m1=0,m2=0,s1=127,s2=127;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if(m1 < a){
            m2 = m1;
            m1 = a;
        }
        else if(m2 < a)
            m2 = a;
        if(s1 > a){
            s2 = s1;
            s1 = a;
        }
        else if(s2 > a)
            s2 = a;
    }
    cout << m2 << " " << s2 << endl;
}
//------------------------------
void TwoQ(){
    int m,n,k=0,sum=0;
    bool flag = true;
    cin >> m >> n;
    for(int i = m;i <= n;i++){
        for(int j = 2;j <= i / 2;j++){
            if (i % j == 0){
                flag = false;
                break;
            }
        }
        if (flag == true){
            k++;
            if (k % 2 == 0)
                sum += i;
        }else
            flag = true;
    }
    cout << sum << endl;
}
//------------------------------
void ThreeQ(){
    for (int i = 1; i <= 28; i++) {
        for (int j = 1; j <= 28-i; j++) {
            for (int k = 1; k <= 28-j; k++){
                //printf("%d %d %d\n",i,j,k);
                if ((i * 30 + j * 20 + k * 10) == 500 && (i + j + k) == 30)
                    printf("%d %d %d\n",i,j,k);
            }
        }
    }
}
//-----------------------------
void FourQ(){
    int stu;
    cin >> stu;
    for(int j = 1;j <= stu;j++){
        cout << j << " ";
        if(j % 6 == 0)
            cout << endl;
    }
}
//-------------------------------
void FiveQ(){
    for (int i = 1; i <= 1000; i++){
        int sum=0;
        for (int j = 1; j < i; j++) {
            if(i % j == 0)
                sum += j;
        }
        if (sum == i)
            cout << i <<" ";
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
