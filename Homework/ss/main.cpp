//
//  main.cpp
//  ss
//
//  Created by 彭博云 on 2020/7/31.
//  Copyright © 2020 彭博云. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    char a[100000],abc[26];
    bool temp = false;
    cin >> a;
    long len = strlen(a);
    for (int i = 0; i < len; i++) {
        abc[a[i]-97]++;
    }
    for (int i = 0; i < len; i++) {
        if (abc[i] == 1) {
            cout << char(i+97) << endl;
            temp = true;
            break;
        }
    }
    if (temp == false) {
        cout << "no" << endl;
    }
    return 0;
}
