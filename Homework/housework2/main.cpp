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
using namespace std;
//------------------------------
void Title1(){
    int a,b,s,max=0,day=0;
    for (int i = 1;i < 8;i++){
        cin >> a >> b;
        s = a + b;
        if ((s > max)&&(s > 8)){
            max=s;
            day=i;
        }
    }
    cout << day << endl;
}
void Title2(){
    int b=0,n,a[11];
    for(int i = 1;i <= 10;i++)
        cin >> a[i];
    cin >> n;
    n = n + 30;
    for(int i = 1;i <= 10;i++){
       if(n >= a[i])
         b++;
    }
    cout<<b<<endl;
}
//------------------------------
void Title3(){
    int start,end,n,num = 0,temp=0;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
        n = i;
        while (n != 0){
            num = n % 10;
            n = n / 10;
            if (num == 2) {
                temp++;
            }
        }
    }
    cout << temp << endl;
}
void Title4(){
    int n;
    cin >> n;
    int h = 0,l = 1 , i , sum = 0;
    for(i = 1;i <= n;i += l){
        sum += l * (i - h);
        l++;
        h = i;
    }
    if(i != n)
        sum += (n - h) * l;
    cout << sum << endl;
}

//-----------------------------z
void Title5(){
    int work,test,exam;
    cin >> work >> test >> exam;
    cout << work * 0.2 + test * 0.3 + exam * 0.5 << endl;
}
//-------------------------------
void Title6(){
    int n,num = 0;
    cin >> n;
    while (n){
        num = num * 10 + n % 10;
        n = n / 10;
    }
    cout << num << endl;
}
void Title7(){
    string in;
       cin >> in;
       int output = 0;
       for (int i = 0; i < in.length();i++) {
           if (in[i] >= 0 && in[i] <= 127)
               output++;
       }
       cout << output << endl;
}
void Title8(){
    string in;
    int temp=0;
    cin >> in;
    for (int i = 0;i < 8; i++) {
        if (in[i] == '1') {
            temp++;
        }
    }cout << temp << endl;
}
int main() {
    //Title1();
    //Title2();
    Title3();
    //Title4();
    //Title5();
    //Title6();
    //Title7();
    //Title8();
}

