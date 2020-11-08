//
//  main.cpp
//  classes1
//
//  Created by 彭博云 on 2020/9/26.
//  Copyright © 2020 彭博云. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
#include<algorithm>
using namespace std;

char a[101],s[101];
int top=0;
void push (int x) {
    if (top < 100) {
        top++;
        s[top] = x;
    }
}
void pop(){
    if (top > 0) {
        cout << s[top];
        top--;
    }
}
void one(){
    int n;
    cin >> n >> a;
    for (int i = 0; i < n; i++) {
        push(a[i]);
    }
    for (int i = 0; i < n; i++) {
        pop();
    }
}
int main() {
    one();
}
