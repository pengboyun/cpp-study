//
//  main.cpp
//  work4
//
//  Created by 彭博云 on 2020/5/23.
//  Copyright © 2020 彭博云. All rights reserved.
//
#include <iostream>
#include <cmath>
using namespace std;
void OneQ(){
    int g,money;
    string y;
    cin >> g >> y;
    
    if (g <= 1000){
        money = 8;
    }
    else{
        money = 8 + (g - 1000) / 500 * 4;
        if((g - 1000) % 500 != 0){
            money = money + 4;
        }
    }
    
    if (y == "y"){
        money = money+5;
    }
    cout << money << endl;
}
void TwoQ(){
    int num;
    bool isN = true;
    cin >> num;
    if (num % 3 == 0){
        cout << "3 ";
        isN = false;
    }
    if (num % 5 == 0){
        cout << "5 ";
        isN = false;
    }
    if (num % 7 == 0){
        cout << "7";
        isN = false;
    }
    if (isN){
        cout << "n";
    }
    cout << endl;
}


















          


//---------------------------------------
int main() {
    //OneQ();
    TwoQ();
    return 0;
}
