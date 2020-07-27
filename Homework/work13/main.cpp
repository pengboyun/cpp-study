//
//  main.cpp
//  work13
//
//  Created by 彭博云 on 2020/7/5.
//  Copyright © 2020 彭博云. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//------------------------------
void OneQ(){
    char arr[100];
    string in;
    int temp=0;
    long l;
    cin.getline(arr, 100);
    l = strlen(arr);
    for (int i = 0; i < l; i++) {
        if(arr[i] < '9' && arr[i] > '0')
            temp++;
        else
            cout << arr[i];
    }
    cout << endl << temp << endl;
}
//------------------------------


void TwoQ(){
    string str, a;
    long l,num=0;
    getline(cin, a);
    getline(cin, str);
    l = str.length();
    for (int i = 0; i < l; i++) {
        if(str[i] == a[0])
            num++;
    }
    cout << num << endl;
}
//-----------------------------
void ThreeQ(){
    string s;
    char a1,a2;
    long l;
    getline(cin, s);
    cin >> a1 >> a2;
    l = s.length();
    for (int i = 0; i < l; i++) {
        if(s[i] == a1)
            s[i] = a2;
    }
    cout << s << endl;
}
//-------------------------------
void FourQ(){
    string str;
    getline(cin, str);
    long l;
    bool flag=true;
    l = str.length();
    for (int i = 0; i < l / 2; i++) {
        if(str[i] != str[l-i-1]){
            cout << "no" << endl;
            flag = false;
            break;
        }
    }
    if (flag == true)
        cout << "yes" << endl;
}
//---------------------------------------
void FiveQ(){
    string str;
    bool flag=false;
    getline(cin, str);
    long l,arr[26]={0};
    l = str.length();
    for(int i = 0;i < l;i++){
        arr[(int)str[i]-97]++;
    }
    for(int i = 0;i < 26;i++){
        if (arr[i] == 1){
            cout << char(i+97) << endl;
            flag = true;
            break;
        }
    }
    if(flag == false)
        cout << "no" << endl;
}
int main() {
    OneQ();
    //TwoQ();
    //ThreeQ();
    //FourQ();
    //FiveQ();
}
