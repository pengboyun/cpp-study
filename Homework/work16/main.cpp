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
void Title1(){
    //逆序输出
    int a[100];
    int x,n = 0;
    while (scanf("%d",&x) == 1) {
        a[n++] = x;
    }for (int i = n - 1; i >= 1; i--) {
        printf("%d ",a[i]);
    }printf("%d\n",a[0]);
}
void Title2(){
    //开灯问题
    int a[1000];
    int n,k,first = 1;
    memset(a, 0, sizeof(a));
    scanf("%d%d",&n,&k);
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            if (j % i == 0)
                a[j] =! a[j];
        }
    }
    for (int i = 1; i <= n; i++) {
        if(a[i]){
            if (first) {
                first = 0;
            }else
                printf(" ");
            printf("%d",i);
        }
    }printf("\n");
}
//------------------------------
void OneQ(){
    int c;
    bool temp = true;
    while ((c = getchar()) != EOF) {
        if (c == '\"') {
            printf("%s" , temp ? "[" : "]");
            temp = !temp;
        }else
            printf("%c",c);
    }
}
//-----------------------------z
void TwoQ(){
    char str[30];
    while (scanf("%s", str) == 1) {
        long len = strlen(str);
        bool state = true;
        for (int i = 0; i < len; i++) {
            if (str[i] != str[len-i-1]) {
                state = false;
                cout << "no";
                break;
            }
        }
        if (state){
            cout << "yes" << endl;
            break;
        }
    }
}
//-------------------------------
#define maxn 100005
void ThreeQ(){
    int ans[maxn];
    int T=maxn,n;
    memset(ans, 0, sizeof(ans));
    for (int m = 1; m < maxn; m++) {
        int x = m,y = m;
        while (x > 0) {
            y += x % 10;
            x /= 10;
        }if (ans[y] == 0||m < ans[y]) {
            ans[y] = m;
        }
    }
    while (T--) {
        scanf("%d",&n);
        printf("%d\n",ans[n]);
    }
}
int main() {
    //Title1();
    //Title2();
    //OneQ();
    //TwoQ();
    ThreeQ();
}

