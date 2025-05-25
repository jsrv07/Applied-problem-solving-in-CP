#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n,x;
    cin>>n>>x;
    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int high=n-1,low=0;
    while(high>=low){
        if(a[high]+a[low]>x){
            high--;
            cnt++;
            continue;
        }
        low++;
        high--;
        cnt++;
    }
    cout<<cnt;
}