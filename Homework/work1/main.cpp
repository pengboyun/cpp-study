//
//  main.cpp
//  work1
//
//  Created by 彭博云 on 2020/4/29.
//  Copyright © 2020 彭博云. All rights reserved.
//

#include <math.h>
#include <iostream>
using namespace std;

void FirstQuestion(){
    int a,b,c;
    cout<<"第一题"<<endl<<"请输入三个数：";
    cin>>a>>b>>c;
    cout<<a*b*c<<"  ";
    cout<<pow(a, 3)+pow(b, 3)+pow(c, 3)<<endl;
}

void SecondQuestinon(){
     cout<<"第二题";
    int second = 8000;
    int hour = second / 3600;
    int min = (second % 3600) /60;
    second = second % 3600 % 60;
    cout<<hour<<"小时"<<min<<"分钟"<<second<<"秒"<<endl;
}

void ThirdQuestion(){
    cout<<"第三题";
    int n;
    cin>>n;
    int One = n % 10;
    int Ten = (n - One)%100/10;
    int Hundred = n / 100;
    cout<<One<<" "<<Ten<<" "<<Hundred<<endl;
}

void FourthQuestions(){
    cout<<"第四题";
    int Yuan, Dime, pen;
    cin>>Yuan>>Dime;
    pen = (Yuan + Dime / 10) / 1.9;
    cout<<pen;
    
}

void FifthQuestions(){
    cout<<"第五题";
    int t1_1, t1_2 , t2_1 ,t2_2;
    cin >> t1_1 >> t1_2 >> t2_1 >> t2_2;
    int end = t2_1 * 60 + t2_2;
    int began = t1_1 * 60 + t1_2;
    int m,h;
    if(end>began)
    {
        m = began - end;
    }
    else
    {
        m = (24*60) - began + end;
    }
    h = m / 60;
    m = m % 60;
    cout<<h<<"小时"<<m<<"分钟"<<endl;
}

int main(int argc, const char * argv[]) {
    FirstQuestion();
    //SecondQuestinon();
    //ThirdQuestion();
    //FourthQuestions();
    //FifthQuestions();
    return 0;
}
