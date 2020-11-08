#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
void one(){
    int a;
    cin >> a;
    int len = strlen(a);
    for (len i = 0; i < len; i++) {
        if(a[i] == '['){
            if (getTop()!='(') {
                push(a[i]);
            }else{
                cout << "No";
            }else if(a[i] == '('){
                pus(a[i]);
            }else if(a[i]==')' && getTop() == '('){
                pop();
            }else if(a[i]==']' && getTop() == '['){
                pop();
            }else{
                cout << "No";
            }
        }if (top == 0) {
            cout << "yes";
        }else
            cout << "no";
    }
}
void two(){
    
}
int main(){
    one();
    return 0;
}
