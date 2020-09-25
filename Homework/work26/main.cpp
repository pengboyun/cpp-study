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
    int in,count = 1;
    cin >> in;
    for (int i = 1; i < in; i++) {
        if (count == 1)
            count = 2;
        count += i - 1;
    }
    cout << count << endl;
}
//-----------------------------
void TwoQ(){
    int m,n;
    cin >> m >> n;
    int a[100] = {0};
    a[m] = 1;
    a[m + 1] = 1;
    for(int i = m + 2;i <= n;i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    cout<<a[n]<<endl;
}

int main() {
    OneQ();
    //TwoQ();
}
