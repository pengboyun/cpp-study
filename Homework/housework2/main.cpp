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
void buy(){
    int num;
    int t1,t2;
    int s1,s2;
    int fi,f2;
    cin >> num;
    cin >> t1 >> t2 >> s1 >> s2 >> f1 >> f2;
    int a = num % t1 == 0 ? (num/t1) * t2:(num / t1 + 1) * t2;
    int b = num % s1 == 0 ? (num/s1) * t2:(num / s1 + 1) * s2;
    int c = num % f1 == 0 ? (num/f1) * f2:(num / f1 + 1) * f2;
    cout << a << " " << b << " " << c << endl;
    int minn = a<b?a:b;
    cout << minn << endl;
        
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
    int n,num = 0;
    cin >> n;
    while (n){
        num = num * 10 + n % 10;
        n = n / 10;
    }
    cout << num << endl;
}
//-----------------------------z
bool
void Title5(){
    
}
//-------------------------------
void Title6(){
    int n;
    cin >> n;
    int l = 1 , i , sum = 0;
    for(i = 1;i <= n;i += l){
        sum += l * l; // 当前可领金币 l * l
        l++;
        printf("i=%d l=%d sum=%d \n",i,l,sum);
    }
    if(i != n)
        sum += (n - i + l) * l;
    cout << sum << endl;
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
    //Title3();
    //Title4();
    //Title5();
    Title6();
    //Title7();
    //Title8();
}

