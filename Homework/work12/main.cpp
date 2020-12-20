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
    int a[100],n,m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1; j++) {
            if (a[j] < a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
    for (int i = n-1; i >= 0; i--){
        if(a[i-1] != a[i])
            cout << a[i] << " ";
    }
}
//------------------------------
void TwoQ(){
    int a[101]={},n,k,min=10000;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        k = i;
        min = a[i];
        for (int j = i + 1; j < n; j++) {
            if (a[j] < min) {
                min = a[j];
                k = j;
            }
        }
        swap(a[k], a[i]);
    }
    for (int i = n-1; i >= 0; i--)
        cout << a[i] << " ";
}
//------------------------------
void ThreeQ(){
    int a[101]={},n,k,min=10000;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        k = i;
        min = a[i];
        for (int j = i + 1; j < n; j++) {
            if (a[j] < min) {
                min = a[j];
                k = j;
            }
        }
        swap(a[k], a[i]);
    }
    for (int i = n-1; i >= 0; i--)
        if (i % 2 != 0 && a[i-1] != a[i]) {
            cout << a[i] << " ";
        }
        
    
}
//-----------------------------
void FourQ(){

}
//-------------------------------
void FiveQ(){

}
//---------------------------------------
int main() {
    OneQ();
    //TwoQ();
    //ThreeQ();
    //FourQ();
    //FiveQ();
}

