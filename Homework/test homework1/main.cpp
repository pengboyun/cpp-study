//
//  main.cpp
//  test homework1
//
//  Created by 彭博云 on 2020/11/7.
//  Copyright © 2020 彭博云. All rights reserved.
//

#include <fstream>
using namespace::std;
ifstream cin("num.in");
ofstream cout("num.out");
int main() {
    int a,b,n,out[31];
    cin >> a >> b >> n;
    out[0] = a;
    out[1] = b;
    cout << a << " " << b << " ";
    for (int i = 2;i < n; i++) {
        out[i] = out[i-1] + out[i-2];
        cout << out[i] << " ";
    }
    cin.close();
    cout.close();
    return 0;
}
