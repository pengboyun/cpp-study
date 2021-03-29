#include<iostream>
#include<algorithm>
#define maxn 101
using namespace std;
int a[maxn];
void qsort(int left,int right){
    if(left>=right)
        return ;
    int x=a[left],i=left,j=right;
    while(i < j){
        while(i<j && a[j]>=x)
            j--;
        a[i] = a[j];
        while(i<j && a[i]<=x)
            i++;
        a[j] = a[i];
    }
    a[i] = x;
    qsort(left,i-1);
    qsort(i+1,right);
}

int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
        cin >> a[i];
    qsort(1,n);
    for(i=1;i<=n;i++)
        cout << a[i] <<' ';
    return 0;
}
