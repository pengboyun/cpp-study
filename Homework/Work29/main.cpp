#include<iostream>
using namespace std;


int main(){
    char a[1000]={},b[1000]={};
    int a1[1000]={},b1[1000]={},c1[1000]={};
    cin >> a >> b;
    long lena=strlen(a),lenb=strlen(b);
    long len = (lena > lenb?lena:lenb);
    
    for(int i = 0;i < lena;i++)
        a1[i] = a[lena - 1 - i]-48;
    
    for(int i = 0;i < lenb;i++)
        b1[i] = b[lenb - 1 -i]-48;
    
    for (int i = 0;i<len;i++)
        c1[i] = b1[i] + a1[i];
    
    
    for (int i = 0; i < len; i++)
        printf("%d",c1[len - 1 - i]);
    printf("\n");}

