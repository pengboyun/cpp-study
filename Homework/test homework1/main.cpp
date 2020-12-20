//
//  main.cpp
//  test homework1
//
//  Created by 彭博云 on 2020/11/7.
//  Copyright © 2020 彭博云. All rights reserved.
//

#include <iostream>
using namespace std;

bool isPr(int n){
    if (n < 2) {
        return false;
    }for(int i = 2;i * i <= n;i++){
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    
}
//int f[101];
//int n;
//cin >> n;
//f[0] = 1;
//f[1] = 1;
//for (int i = 2; i < n; i++) {
//    f[i] = 3 * f[i-1]+2 * f[i-2];
//}cout << f[n-1];




//int a[20] = {},temp;
//for (int i = 1; i <= 25; i++) {
//    cin >> temp;
//    a[temp]++;
//}
//for (int i = 1; i <= 13; i++) {
//    if (a[i] = 1) {
//        cout << i;
//        break;
//    }
//}
//return 0;




//int a,b,n;
//cin >> a;
//for (int i = 1; i <= a;i++) {
//    if (a % i == 0) {
//        b = b + 1;
//    }
//}
//cout << b;
