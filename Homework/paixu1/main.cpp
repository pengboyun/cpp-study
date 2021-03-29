#include<iostream>
using namespace std;
const int maxn = 101;
int a[maxn],r[maxn];
void merge(int left,int right){

    if(left == right)
        return;
    int mid = (left+right)/2;
    merge(left,mid);
    merge(mid+1,right);
    int i = left, j = mid+1;
    int k = left;
    while(i <= mid && j<= right){
        if( a[i]<=a[j] )
            r[k++] = a[i++];
        else
            r[k++] = a[j++];
    }
    while( i<=mid )
        r[k++]=a[i++];
    while( j<=right )
        r[k++]=a[j++];
    for(i=left;i<=right;i++) a[i] =r[i];

    return;
}
int main(){
    int n,i;
    cin >> n;
    for(i=1;i<=n;i++)
        cin >> a[i];
    merge(1,n);
    for(i=1;i<=n;i++)
        cout << a[i]<<' ';
    return 0;
}

