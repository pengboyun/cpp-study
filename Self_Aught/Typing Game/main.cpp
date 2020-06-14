//
//  main.cpp
//  Typing Game
//
//  Created by 彭博云 on 2020/6/13.
//  Copyright © 2020 彭博云. All rights reserved.
//

#include <iostream>
using namespace std;
void one(){
    int num = rand() % 7;
    cout << "      第一关"<<endl<<"___________________"<<endl;
    string abc,in;
    while(1){
        switch (num) {
        case 1:
            abc = "a";
            break;
        case 2:
            abc = "s";
            break;
        case 3:
            abc = "d";
            break;
        case 4:
            abc = "f";
            break;
        case 5:
            abc = "l";
            break;
        case 6:
            abc = "k";
            break;
        default:
            abc = "j";
            break;
        }
        num = rand() % 7;
        cout << "打出"<<abc<<endl;
        cin >> in;
        if (abc == in){
            cout << "做对了！"<<endl;
        }else{
            cout << "打错了，游戏结束"<<endl;
            break;
        }
    }
}

int main() {
    one();
    return 0;
}
