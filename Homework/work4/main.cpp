//
//  main.cpp
//  work4
//
//  Created by 彭博云 on 2020/5/23.
//  Copyright © 2020 彭博云. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
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


void ThreeQ(){
    double x,y=0;
    cin >> x;
    if (x < 5 && x >= 0){
        y = -x + 2.5;
    }
    else if (x < 10 && x >=5){
        y = 2-1.5*(x-3)*(x-3);
    }
    else if (x >= 10 && x < 20){
        y = x/2-1.5;
    }
    else{
        cout << "不在范围";
    }
    printf("%.3f",y);
    cout << endl;
}


void FourQ(){
    int electric = 0;
    float q;
    cin >> electric;
    if (electric <= 150){
        q = 0.4463*electric;
    }
    else if (electric <= 400){
        q = 0.4463*150+0.4663*(electric - 150);
    }
    else{
        q = 0.4463*150+0.4665*250+0.5663*(electric - 400);
    }
    printf("%.1f",q);
    cout << endl;
}

void FiveQ(){
    float a=1,b=2,c=8,temp;
    float x1,x2;

    cin >> a >> b >> c;
    temp = b*b-4.*a*c;
    if(temp<0){
        temp = -sqrt(-temp);
    }else{
        temp = sqrt(temp);
    }
    x1 = (-b+temp)/(2.*a);
    x2 = (-b-temp)/(2.*a);
    if (b*b==4*a*c){
        printf("x1=x2 %.5f=%.5f\n",x1,x2);
    }
    else if (b*b>4*a*c){
        printf("x1=%.5f=x2=%.5f\n",x1,x2);
}
    else{
        float a2 = a*2;
        printf("x1=%.5f+%.5fi; x2=%.5f+%.5fi\n",-b/a2,temp/a2,-b/a2,temp/a2);
}
}



          


//---------------------------------------
int main() {
    //OneQ();
    //TwoQ();
    //ThreeQ();
    //FourQ();
    FiveQ();
}
