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
int main() {
//    int myvar;
//    cin >> myvar;
//    cout << &myvar << endl;
//-----------------------------
//    int a,& c = a;
//    cin >> a;
//    c = 2 * a;
//    cout << a;
//-----------------------------
//    int a, b;
//    cin >> a >>b;
//    if (&a - &b == 1 || &a - &b == -1){
//        cout << "yes" << endl;
//    }
//    else{
//        cout << "no" <<endl;
//    }
//------------------------------
//    char road;
//    cin >> road;
//    switch (road) {
//        case 'A':
//            cout << "A路口";
//            break;
//        case 'B':
//            cout << "B路口";
//            break;
//        case 'C':
//            cout << "C路口";
//            break;
//        default:
//            cout << "没有对应路口";
//  }
//------------------------------
//    int c;
//    cin >> c;
//    switch (c / 10) {
//        case 10:
//        case 9:
//            cout << "A";
//            break;
//        case 8:
//        case 7:
//        case 6:
//            cout << "B";
//            break;
//        default:
//            cout << "c";
//    }
//-------------------------------
//    int n;
//    cin >> n;
//    switch (n) {
//        case 1:
//            cout << "星期一";
//            break;
//        case 2:
//            cout << "星期二";
//            break;
//        case 3:
//            cout << "星期三";
//            break;
//        case 4:
//            cout << "星期四";
//            break;
//        case 5:
//            cout << "星期五";
//            break;
//        case 6:
//            cout << "星期六";
//            break;
//        case 7:
//            cout << "星期日";
//            break;
//        default:
//            cout << "不在范围内"<<endl;
//            break;
//    }
//---------------------------------
//    int n;
//    cin >> n;
//    switch (n) {
//        case 1:
//            cout << "price = 3.0";
//            break;
//        case 2:
//            cout << "price = 2.5";
//            break;
//        case 3:
//            cout << "price = 4.1";
//            break;
//        case 4:
//            cout << "price = 10.2";
//            break;
//        default:
//            cout << "没有该商品";
//            break;
//    }
//    cout << endl;
//-----------------------------------
    int a;
    cin >> a;
    for (int b = 1;b<=a;b++){
        for (int c=1;c<=b;c++) {
            cout << c << " ";
        }cout << endl;
    }
    
    return 0;
}

