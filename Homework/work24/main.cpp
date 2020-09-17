//
//  main.cpp
//  work24
//
//  Created by 彭博云 on 2020/9/6.
//  Copyright © 2020 彭博云. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
#include<algorithm>
using namespace std;
void OneQ(){
    char a[1000]={},b[1000]={};
    int a1[1000]={},b1[1000]={},c1[1000]={};
    cin >> a >> b;
    long lena=strlen(a),lenb=strlen(b);
    for(int i = 0;i < lena;i++)
        a1[i] = a[lena - 1 - i]-48;
    for(int i = 0;i < lenb;i++)
        b1[i] = b[lenb - 1 -i]-48;
    long biglen = max(lena,lenb);
    int lenc = 0,x = 0;
    while (lenc < biglen) {
        c1[lenc] = a1[lenc] + b1[lenc] + x;
        x = c1[lenc] / 10;
        c1[lenc] = c1[lenc] % 10;
        lenc++;
    }
    if(x == 0)
        lenc--;
    else
        c1[lenc] = x;
    for (int i = 0; i <= lenc; i++) {
        printf("%d",c1[lenc-i]);
    }
    cout << endl;
}
void TwoQ(){
    char a[1000]={},b[1000]={};
    int a1[1000]={},b1[1000]={},c1[1000]={};
    cin >> b >> a;
    long lena=strlen(a),lenb=strlen(b);
    for(int i = 0;i < lena;i++)
        a1[i] = a[lena - 1 - i] - 48;
    for(int i = 0;i < lenb;i++)
        b1[i] = b[lenb - 1 - i] - 48;
    int x = 0;
    for (int i = 0; i < lena; i++) {
        c1[i] = a1[i] - x - b1[i];
        if (c1[i] < 0) {
            c1[i] += 10;
            x = 1;
        }else
            x = 0;
    }
    for (long i = lena - 1; i > 0; i--) {
        if (c1[i] == 0)
            lena--;
        else
            break;
    }
    for (long i = lena - 1; i >= 0; i--)
        cout << c1[i];
    printf("\n");
}
int main() {
    //OneQ();
    TwoQ();
}
