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
#include<algorithm>
using namespace std;
//------------------------------
struct Money{
    string name;
    float j,f,z,sum;
};
void OneQ(){
    Money m[3];
    for (int i = 0; i < 3; i++) {
        cin >> m[i].name >> m[i].j >> m[i].f >> m[i].z;
        m[i].sum = m[i].j + m[i].f - m[i].z;
    }
    for (int i = 0; i < 3; i++) {
        printf("%s %.2f\n",m[i].name.c_str() ,m[i].sum);
    }
}
//------------------------------
void TwoQ(){
    int a[1000],ci;
    cin >> ci;
    for (int i = 0; i < ci; i++)
        cin >> a[i];
    sort(a,a+ci);
    for (int i = 0; i < ci; i++) {
        cout << a[i] << " ";
    }
}
//-----------------------------
struct Chu{
    string name;
    int num;
};
bool cmp(Chu a,Chu b){
    return a.num < b.num;
}
void ThreeQ(){
    int people;
    cin >> people;
    Chu c[people];
    for (int i = 0; i < people; i++){
        cin >> c[i].name >> c[i].num;
    }
    sort(c, c+people,cmp);
    for (int i = 0; i < people; i++) {
        printf("%s\n",c[i].name.c_str());
    }
}
//-------------------------------
struct Cun{
    string name;
    int hao,piao;
};
bool cmp2(Cun a,Cun b){
    if(a.piao == b.piao)
        return a.hao < b.hao;
    else
        return a.piao > b.piao;
}
void FourQ(){
    int people,in;
    cin >> people;
    Cun cun[3];
    cun[0] = {"喜羊羊",1,0};
    cun[1] = {"懒羊羊",2,0};
    cun[2] = {"美羊羊",3,0};
    for (int i = 0; i < people; i++){
        cin >> in;
        cun[in-1].piao++;
    }
    sort(cun, cun+3, cmp2);
    for (int i = 0; i < 3; i++) {
        printf("%d %s %d\n",cun[i].hao,cun[i].name.c_str(),cun[i].piao);
    }
}
//---------------------------------------
struct Money2{
    string name;
    int money;
};
bool cmp3(Money2 a,Money2 b){
    return a.money > b.money;
}
void FiveQ(){
    int people;
    cin >> people;
    Money2 m[people];
    for (int i = 0; i < people; i++) {
        cin >> m[i].name >> m[i].money;
    }
    sort(m, m+people, cmp3);
    printf("%s %d\n",m[0].name.c_str(),m[0].money);
    for (int i = 1; i < people; i++) {
        if(m[i].money == m[0].money)
            printf("%s %d\n",m[i].name.c_str(),m[i].money);
        else
            break;
    }
}
int main() {
    //OneQ();
    //TwoQ();
    //ThreeQ();
    //FourQ();
    FiveQ();
}
