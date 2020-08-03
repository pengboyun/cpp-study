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
void OneQ(){
    int N,big=0,maxi=0;
    cin >> N;
    int arr[N];
    string name[N];
    for (int i = 0; i < 4; i++) {
        cin >> arr[i] >> name[i];
        if(big < arr[i]){
            big = arr[i];
            maxi = i;
        }
    }
    cout << name[maxi] << endl;
}
//------------------------------
void TwoQ(){
    string ci;
    int num;
    long l;
    cin >> ci;
    cin >> num;
    l = ci.length();
    for(int i = 0;i < l;i++)
        ci[i]=char((int)ci[i]+num);
    cout << ci << endl;
}
//-----------------------------
void ThreeQ(){
    string str;
    int len=0,start=0,end;
    int max=0,max_start=0,max_end=0;
    long l;
    getline(cin, str);
    l = str.length();
    for (int i = 0; i < l; i++) {
        if(str[i] == ' ' || str[i] == ',' || str[i] == '.'){
            end = i-1;
            len = i - start;
            if(max < len){
                max = len;
                max_start = start;
                max_end = end;
            }
            start = i+1;
        }
    }
    for (int i = max_start; i <= max_end; i++) {
        printf("%c",str[i]);
    }
    printf("\n");
}
//-------------------------------
void FourQ(){
    int N,big=0,qimo,banji,laodong,money;
    string ganbu,maxname;
    cin >> N;
    string name[N];
    for (int i = 0; i < N; i++) {
        cin >> name[i] >> qimo >> banji >> ganbu >> laodong;
        money = 0;
        if(qimo > 80 && laodong > 0)
            money += 3000;
        if(qimo > 85 && banji > 80)
            money += 4000;
        if(qimo > 90)
            money += 2000;
        if(banji > 80)
            money += 850;
        if(money > big){
            big = money;
            maxname = name[i];
        }
    }
    cout << maxname << " " << big << endl;
}
//---------------------------------------
void FiveQ(){
    char a[14];
    int m=0,j=1;
    for(int i=0;i<13;i++){
        cin >> a[i];
        if(i<11){
            if(a[i]!= '-'){
                m+=(a[i]-48)*j++;
            }
        }
    }
    m=m%11;
    if(m==10){
        if(a[12]=='X')
            cout<<"Right"<<endl;
        else{
            a[12]='X';
            a[13]='\0';
            cout<<a;
        }
    }
    else if(m==(a[12]-48)){
        cout<<"Right"<<endl;
        
    }
    else{
        a[12]=m+48;
        a[13]='\0';
        cout<<a<<endl;
    }

}
int main() {
    //OneQ();
    //TwoQ();
    //ThreeQ();
    //FourQ();
    FiveQ();
}
