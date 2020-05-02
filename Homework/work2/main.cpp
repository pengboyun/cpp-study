//
//  main.cpp
//  work2
//
//  Created by 彭博云 on 2020/5/2.
//  Copyright © 2020 彭博云. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
void FirstQuestion(){
    int h,r;
    cin >> h >> r;
    const double pi = 3.14159;
    double t = pi * r * r * h;
    double all = 20*1000/ t;
    //向上取整
    cout << ceil(all) <<endl;
}
void SecondQuestinon(){
        int i;
        cin >> i;
        cout << char(i) << endl;
}
void ThirdQuestion(){
    int x,y;
    cin >> x >> y;
    double all = (x*87+y*85)/(x + y);
    cout << all << endl;
    }
void FourthQuestions(){
    float a;
    cin >> a;
    if(a > 0)
        cout << (int)a << endl;
    else
        // ceil(a);
        cout << -(int)-a << endl;
}
void FifthQuestions(){
    int a , b , n;
    cin >> a >> b >> n;
    int t = a + (n - 1) * (b - a);
    cout << t << endl;
}
int main(){
    //FirstQuestion();
    //SecondQuestinon();
    //ThirdQuestion();
    //FourthQuestions();
    FifthQuestions();
    
}
