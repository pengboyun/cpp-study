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
#include<algorithm>
using namespace std;
//------------------------------
void OneQ(){
    char a[100];
    int a1[200],c1[200],x=0;
    cin >> a;
    long len = strlen(a);
    for (int i = 0; i < len; i++)
        a1[i] = a[i] - 48;
    
    for (long i = len-1, j = 0; i >= 0; i--,j++){
        c1[j] = a1[i] * 5 + x;
        x = c1[j]/10;
        c1[j] = c1[j] % 10;
        printf("%d * 5 = %d _ %d\n",a1[i],x,c1[j]);
    }
    if (x > 0) {
        c1[len] = x;
        len++;
    }
    for (long i = len-1; i >= 0; i--) {
        cout << c1[i];
    }
    cout << endl;
}
//------------------------------
void TwoQ(){
    char a[100],b[100];
    int a1[100],b1[100],c1[200]={0},x=0;
    int j=0,j1=0;
    cin >> a >> b;
    long lena = strlen(a),lenb = strlen(b);
    for (int i = 0; i < lena; i++)
        a1[i] = a[i] - 48;
    for (int i = 0; i < lenb; i++)
        b1[i] = b[i] - 48;
    long lenc = lena + lenb;
    for (long a_num = lena-1; a_num >= 0; a_num--){
        j = j1++;
        for (long b_num = lenb-1; b_num >= 0; b_num--,j++) {
            c1[j] += a1[a_num] * b1[b_num] + x;
            x = c1[j]/10;
            c1[j] = c1[j] % 10;
        }
        if (x > 0) {
            c1[j] = x;
        }
        x = 0;
    }
    if(x == 0){
        lenc--;
    }
    for (long i1 = lenc-1; i1 >= 0; i1--) {
        cout << c1[i1];
    }
    printf("\n");
}
//-----------------------------
int main() {
    //OneQ();
    TwoQ();
}
