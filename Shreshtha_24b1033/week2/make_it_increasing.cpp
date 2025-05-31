#include <bits/stdc++.h>
using namespace std;
#define int long long

int moves(vector<int>& a, int n){
    int ans=0;
    for(int i=n-1;i>=1;i--){
        while(a[i-1]>=a[i]){
            if(a[i-1]==0) return -1;
            a[i-1]/=2;
            ans++;
        }
    }
    return ans;
}

signed main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<moves(a,n)<<endl;
    }
}