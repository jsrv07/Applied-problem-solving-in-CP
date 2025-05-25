#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void cntr(int n,int x,int a[]){
    if (n==0){
        cnt++;
        return;
    }
    else if(n<0){
        return;
    }
    for(int i=0;i<x;i++){
        cntr(n-a[i],x,a);
    }
}
int main(){
    int x,n;
    cin>>x>>n;
    int a[x];
    for(int & k: a)
    cin>>k;
    cntr(n,x,a);
    cout<<cnt;
}