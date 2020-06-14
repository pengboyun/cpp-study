//
//  main.cpp
//  work6
//
//  Created by 彭博云 on 2020/6/7.
//  Copyright © 2020 彭博云. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void OneQ(){
    int num,n1,a=1,big=0,small=10000;
    double b=0.;
    cin >> num;
    while (a++ <= num) {
        cin >> n1;
        b = n1 + b;
        if (big < n1)
            big = n1;
        if (small > n1)
            small = n1;
    }
    printf("%d %d %.3f\n",small,big,b/num)
}
    
//------------------------------
void TwoQ(){
    int N,m;
    cin>>N;
    while (N != 1){
        if (N%2!=0){
            m=N*3+1;
            printf("%d%s%d\n",N,"*3+1=",m);
            N = m;
            }
        else{
            m=N/2;
            printf("%d%s%d\n",N,"/2=",m);
            N=m;
            }
    }
    printf("%s\n","end");
}
//------------------------------
void ThreeQ(){
    double len,blong=0,ci=2;
    int bushu=0;
    cin >> len;
    while (blong < len) {
        blong += ci;
        ci *= 0.98;
        bushu++;
    }
    printf("%d\n",bushu);
}
//------------------------------
void FourQ(){
    double h,total;
    cin >> h;
    total = h;
    int i = 1;
    while(i++ < 10) {
        h /= 2;
        total += 2 * h;
    }
    printf("%f\n%f\n",total,h / 2);
}
//-------------------------------
void FiveQ(){
    int day,money=1,n=0,all=0;
    cin >> day;
    while (day-- > 0) {
        all += money;
        if (++n == money){
            money++;
            n = 0;
        }
    }
    printf("%d\n",all);
}
//---------------------------------------
int main() {
    //OneQ();
    TwoQ();
    //ThreeQ();
    //FourQ();
    //FiveQ();
}
