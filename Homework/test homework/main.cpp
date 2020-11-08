//
//  main.cpp
//  test homework
//
//  Created by 彭博云 on 2020/11/7.
//  Copyright © 2020 彭博云. All rights reserved.
//

#include <fstream>
using namespace::std;
ifstream cin("triangle.in");
ofstream cout("triangle.out");
int main() {
    int n,a[1001][1001];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1;j <= i; j++) {
            if (j == 1||j == 1) {
                a[i][j] = 1;
            }else{
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cin.close();
    cout.close();
    return 0;
}
