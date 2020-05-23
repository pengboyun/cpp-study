//
//  main.cpp
//  work4
//
//  Created by 彭博云 on 2020/5/23.
//  Copyright © 2020 彭博云. All rights reserved.
//
#include <cmath>
#include <math.h>
#include <iostream>
using namespace std;

int main() {
//    int a , b ,c;
//    cin >> a >> b >> c;
//    if (a+b>c&&b+c>a&&a+c>b){
//        cout << "yes"<< endl;
//    }
//    else{
//        cout << "no" << endl;
//    }
//
//    int y ,s;
//    cin >> y >> s;
//    if(y < 60 || s < 60){
//        cout << "1";
//    }
//    else{
//        cout << "0";
//    }
//    int d;
//    cin >> d;
//    if (d % 4 == 0 && d % 100 != 0){
//        cout << "闰年";
//    }
//    else if(d % 400 == 0){
//        cout << "闰年";
//    }
//    else{
//        cout << "平年";
//    }
//
//    float kg;
//    cin >> kg;
//    if (kg <= 15){
//        kg = kg * 6;
//        cout << ceil(kg);
//    }
//    else{
//        kg = 15 * 6 + (kg - 15) * 9;
//        cout << ceil(kg);
//    }
//    cout << endl;
//  int x ,y;
//    cin >> x >> y;
//    if (x <= 1 && x >= -1 && y <= 1 && y >= -1){
//        cout << "yes";
//    }
//    else{
//        cout << "no";
//    }
//
    int m;
    cin >> m;
    if (m <= 3){
        cout << "14";
    }
    else{
        cout << round(13+(m-3)*2.3+1);
    }
//------------------------------
}

