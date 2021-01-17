//
//  main.cpp
//  class no1
//
//  Created by 彭博云 on 2020/12/5.
//  Copyright © 2020 彭博云. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
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
    return 0;
}
