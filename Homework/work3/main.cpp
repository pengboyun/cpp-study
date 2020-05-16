//
//  main.cpp
//  work3
//
//  Created by 彭博云 on 2020/5/2.
//  Copyright © 2020 彭博云. All rights reserved.
//
#include <iostream>
using namespace std;
void OneQ(){
    int a, b, c ,max;
    cin >> a >> b >> c;
    if (a > b){
        max = a;
    }
    else{
        max = b;
    }
    
    //max = a>b?a:b;
    
    if (max < c){
        max = c;
    }
    
    cout << max;
    cout << endl;
}
//__________________________
void TwoQ(){
    float b , result;
    cin >> b;
    
    if (b <= 5){
        result = b * 3;
    }
    else{
        result = 5 * 3 + (b - 5) * 3 * 0.8;
    }
    
    cout << result;
}
//___________________________________
void ThreeQ(){
    int n;
    cin >> n;
    if (n == 0){
        cout << "zero";
    }
    else if (n > 0){
        cout << "positive";
    }
    else{
        cout << "negative";
    }
    cout << endl;
}
//____________________________________
void FourQ(){
    char ascll;
    cin >> ascll;
    if (ascll % 2 == 0){
        cout << "No";
    }
    else{
        cout << "Yes";
    }
    cout << endl;
}
//_____________________________________
void FiveQ(){
    uint x;
    int y;
    cin >> x >> y;
    if ((long)x > y){
        cout << ">";
    }
    else if((long)x == y){
        cout << "=";
    }
    else{
        cout << "<";
    }
    cout << endl;
}

using namespace std;
int main() {
    //OneQ();
    //TwoQ();
    //ThreeQ();
    //FourQ();
    FiveQ();
    return 0;
}
