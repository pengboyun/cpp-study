//
//  main.cpp
//  work7
//
//  Created by 彭博云 on 2020/6/14.
//  Copyright © 2020 彭博云. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void OneQ(){
    int n1=0,big=0,small=10000;
    double b=0.;
    for (int i = 1; i <= 10; i++) {
        cin >> n1;
        b = n1 + b;
        if (big < n1)
            big = n1;
        if (small > n1)
            small = n1;
    }
    b = (b-big-small)/8;
    printf("%.3f\n",b);
}
    
//------------------------------
void TwoQ(){
    int bai,shi,ge;
    for (int n = 100;n <= 999;n++){
        bai=n/100;
        ge=n%10;
        shi=n/10%10;
        if(pow(ge,3)+pow(shi,3)+pow(bai,3)==n){
            cout << n << " ";
        }
    }
    cout << endl;
}
//------------------------------
void ThreeQ(){
    int num,n1;
    double b=0.;
    cin >> num;
    for (int i = 1; i <= num; i++) {
        cin >> n1;
        b = n1 + b;
    }
    printf("%.2f\n",b/num);
}
//------------------------------
void FourQ(){
    int m,n,a = 0;
    cin >> m >> n;
    for (; m <= n; m++) {
        if(m % 3 == 0 && m % 5 == 0 && m % 7 == 0){
            cout << m << " ";
            a = 1;
        }
    }
    if(a == 0){
        cout << "0";
    }
}
//-------------------------------
void FiveQ(){
    int m,n,result=0;
    cin >> m >> n;
    if (m % 17 != 0){
        m = (m / 17 + 1) * 17;
    }
    for (;m <= n; m += 17) {
        result += m;
        printf("%d %d\n",m,result);
    }
    cout << result << endl;
}
//---------------------------------------
int main() {
    //OneQ();
    //TwoQ();
    //ThreeQ();
    //FourQ();
    FiveQ();
}
