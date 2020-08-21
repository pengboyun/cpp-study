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
void OneQ(char a[],char b[]){
    int a1[1000]={},b1[1000]={},c1[1000]={},x=0,lenc;
    //cin >> a >> b;
    long lena = strlen(a),lenb = strlen(b);
    long maxlen = max(lena, lenb);
    for(int i = 0;i < lena;i++){
        a1[i] = a[i] - 48;
    }
    for (int i = 0; i < lenb; i++) {
        b1[i] = b[i] - 48;
    }
    for (lenc = 0; lenc < maxlen; lenc++) {
        c1[lenc] = a1[lenc] + b1[lenc] + x;
        x = c1[lenc] / 10;
        c1[lenc] = c1[lenc] % 10;
    }
    if (x == 0) {
        lenc--;
    }else{
        c1[lenc] = x;
        return c1;
    }
//    for(int i = lenc;i >= 0;i--)
//        printf("%d",c1[i]);
//    printf("\n");
}
//------------------------------
void TwoQ(char a[],char b[]){
    int a1[1000]={},b1[1000]={},c1[1000]={},x=0;
    //cin >> a >> b;
    long lena = strlen(a),lenb = strlen(b);
    for(int i = 0;i < lena;i++){
        a1[lena-i-1] = a[i] - 48;
    }
    for (int i = 0; i < lenb; i++) {
        b1[lena-i-1] = b[i] - 48;
    }
    for (int i = 0; i < lena; i++) {
        c1[i] = a1[i] - b1[i+lena-lenb] - x;
        if (c1[i] < 0) {
            c1[i] += 10;
            x = 1;
        }
        else
            x = 0;
    }
    for (long i = lena-1; i > 0; i--) {
       if (c1[i] == 0)
           lena--;
       else
           break;
    }
    
    for(long i = lena-1;i >= 0;i--)
        printf("%d",c1[i]);
    printf("\n");
}
//-----------------------------
void ThreeQ(char a[],char b[]){
    int a1[100],b1[100],c1[200]={0},x=0;
    int j=0,j1=0;
    //cin >> a >> b;
    long lena = strlen(a),lenb = strlen(b),lenc = lena + lenb;
    for (int i = 0; i < lena; i++)
        a1[i] = a[i] - 48;
    for (int i = 0; i < lenb; i++)
        b1[i] = b[i] - 48;
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
    for (long i = lenc-1; i >= 0; i--) {
        cout << c1[i];
    }
    printf("\n");
}
int main() {
    char temp;
    char x[1000],z[1000];
    int result[1000]
    cin >> temp >> x >> z;
    if (temp == '+')
        result = OneQ(x, z);
    else if(temp == '-')
        TwoQ(x, z);
    else if(temp == '*')
        ThreeQ(x, z);
    
    return 0;
}
