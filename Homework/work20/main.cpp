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
    char a[1000]={},b[1000]={};
    int a1[1000]={},b1[1000]={},c1[1000]={};
    cin >> a >> b;
    long len = strlen(a);
    for(int i = 0;i < len;i++){
        a1[i] = a[i] - 48;
        b1[i] = b[i] - 48;
        c1[i] = a1[i] - b1[i];
    }
    for(int i = 0;i<len;i++)
        printf("%d",c1[i]);
    printf("\n");
}
//------------------------------
void TwoQ(){
    char a[1000]={},b[1000]={};
    int a1[1000]={},b1[1000]={},c1[1000]={};
    bool flag = true;
    cin >> a >> b;
    long lena=strlen(a),lenb=strlen(b);
    long len = (lena > lenb?lena:lenb);
    for(int i = 0;i < lena;i++)
        a1[i] = a[lena - 1 - i]-48;
    for(int i = 0;i < lenb;i++)
        b1[i] = b[lenb - 1 -i]-48;
    for (int i = 0;i<len;i++)
        c1[i] = a1[i] - b1[i];
    for (long i = len-1; i >= 0; i--){
        if(c1[i] != 0 || i == 0)
            flag = false;
        if(not flag)
            printf("%d",c1[i]);
    }
    printf("\n");
}
//-----------------------------
int main() {
    //OneQ();
    TwoQ();
    //ThreeQ();
}
