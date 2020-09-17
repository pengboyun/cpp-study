//
//  main.cpp
//  work14
//
//  Created by 彭博云 on 2020/9/15.
//  Copyright © 2020 彭博云. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
#include<algorithm>
using namespace std;
//------------------------------
int age(int n){
    if(n==1)
        return 10;
    if(n>1)
        return age(n-1)+2;//调用函数本身
    return 0;
}
//------------------------------
void TwoQ(){
    int n;
    const int M = 1000010;
    long long a[M]={0};
    cin>>n;
    a[1]=1;a[2]=2;
    for(int i=3;i<=M;i++)
        a[i]=(2*a[i-1]+a[i-2])%32767;
        while(n--){
        int k;
        cin>>k;cout<<a[k]<<endl;
    }

}
//-----------------------------
void ThreeQ(){
    int i,num=0;
    cin >> i;
    for (int a = 0; a <= i; a++) {
        num += a;
    }
    cout << num << endl;
}
//-----------------------------
void FourQ(){
    
}
//-----------------------------
void FiveQ(){
    
}
//-----------------------------
void SixQ(){
    
}
int main(){
    //int m;
    //scanf("%d",&m);
    //printf("%d\n",age(m));
    //TwoQ();
    ThreeQ();
    //FourQ();
    //FiveQ();
    //SixQ();


}
