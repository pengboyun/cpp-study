//
//  main.cpp
//  work14
//
//  Created by 彭博云 on 2020/7/5.
//  Copyright © 2020 彭博云. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//------------------------------
float bang(float kg){
    return kg * 2.2046226;
}
void OneQ(){
    float kg;
    cin >> kg;
    printf("%.4f\n", bang(kg));
}
//------------------------------
int* Prime(int in[100]){
    int *zhi = new int[100],temp=0;
    for (int i = 0; i < 100; i++) {
        bool flag = false;
        for (int j = 2; j < in[i]; j++) {
            if(in[i] % j != 0){
                flag = true;
                break;
            }
        }
        if (flag){
            zhi[temp] = in[i];
            temp++;
        }
    }
    return zhi;
}

void TwoQ(){
    //-------
    int big;
    cin >> big;
    int in[100]={0};
    int* result;
    for (int i = 0; i < big; i++) {
        cin >> in[i];
    }
    result = Prime(in);
    for (int i = 0; i < 100; i++) {
        printf("%d ",result[i]);
        if (result[i] == 0)
            break;
    }
    printf("\n");
}
//-----------------------------
int cha(int all[100],int peo,int chadui){
    for (int i = 0; i < peo; i++) {
        if (chadui < all[i]) {
            return i+1;
        }
    }
    return peo+1;
}

void ThreeQ(){
    int peo,chadui,all[100],temp=1;
    cin >> peo >> chadui;
    for (int i = 0; i < peo; i++) {
        cin >> all[i];
    }
    temp = cha(all,peo,chadui);
    cout << temp << endl;
}
//-------------------------------
bool PalinPrime(int num){
    bool flag = true;
    for (int j = 2; j < num; j++) {
        if(num % j == 0){
            flag = false;
            break;
        }
    }
    return flag;
}
bool PalinPalindrome(int num){
    int num2=0;
    int tmp = num;
    while (tmp>0){
        num2 = num2 * 10 + tmp % 10;
        tmp /= 10;
    }
    return num == num2;
}
void FourQ(){
    int start,end;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
        if (PalinPrime(i) && PalinPalindrome(i))
            cout << i << endl;
    }
}
//---------------------------------------
int NumRoot(int num){
    int sum=0;
    while(num > 0){
        sum += num%10;
        num /= 10;
    }
    return sum;
}
void FiveQ(){
    int num;
    cin >> num;
    while (num >= 10) {
        num = NumRoot(num);
    }
    cout<<num<<endl;
    
}
int main() {
    //OneQ();
    //TwoQ();
    //ThreeQ();
    //FourQ();
    FiveQ();
}
