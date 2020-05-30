//
//  main.cpp
//  work5
//
//  Created by 彭博云 on 2020/5/30.
//  Copyright © 2020 彭博云. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
void OneQ(){
    int tax;
    cin >> tax;
    switch (tax / 1000) {
        case 0:
            cout << "免税";
            break;
        case 1: case 2: case 3: case 4:
            cout << tax * 0.02;
            break;
        case 5: case 6: case 7: case 8: case 9:
            cout << tax * 0.03;
            break;
        default:
            cout << tax * 0.05;
            break;
    }
    cout << endl;
}

void TwoQ(){
    char Symbol;
    int a,b;
    cin >> a >> b >> Symbol;
    switch (Symbol) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            if (b == 0)
                cout << "Divided by zero!";
            else
                cout << a / b;
            break;
        
        default:
            cout << "Invalid operator!";
            break;
    }
    cout << endl;
}
void Three(){
    int day;
    cin >> day;
    switch (day) {
        case 1: case 3: case 5:
            cout << "NO";
            break;
        case 2: case 4: case 6: case 7:
            cout << "YES";
            break;
        default:
            cout << "不是星期";
            break;
    }
    cout << endl;
}
void FourQ(){
    int a,b;
    cin >> a >> b;
    switch (b) {
        case 1:
            cout << pow(a, 3);
            break;
        case 2:
            printf("%.3f",sqrt(a));
            break;
        case 3:
            printf("%.3f",-sqrt(a));
            break;
        default:
            cout << -a;
            break;
    }
    cout << endl;
}
void FiveQ(){
    int r;
    float pi = 3.14;
    cin >> r;
    printf("%.3f/n",4./3*pi*pow(r,3));
}
void SixQ(){
    int day;
    cin >> day;
    switch (day % 7) {
        case 1:
            cout << "星期日";
            break;
        case 2:
            cout << "星期一";
            break;
        case 3:
            cout << "星期二";
            break;
        case 4:
            cout << "星期三";
            break;
        case 5:
            cout << "星期四";
            break;
        case 6:
            cout << "星期五";
            break;
        case 0:
            cout << "星期六";
            break;
        default:
            break;
    }
    cout << endl;
}
void SixQ_2(){
    int day;
    string x[] = {"一","二","三","四","五","六","日"};
    cin >> day;
    cout << x[day%7-1] << endl;
}

int main() {
    //OneQ();
    //TwoQ();
    //Three();
    //FourQ();
    //FiveQ();
    SixQ_2();
    return 0;
}
