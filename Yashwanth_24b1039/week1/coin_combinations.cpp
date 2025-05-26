#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    cin>>n>>x;

    int arr[n]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int mod=1e9+7;
    int dp[x+1]={};
    dp[0]=1;
    for(int i=0;i<x+1;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>i) break;
            dp[i]=(dp[i]+dp[i-arr[j]])%mod;
        }
    }
    cout<<dp[x];
}