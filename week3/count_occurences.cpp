#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(vector<int> a, int x){
    int l=lower_bound(a.begin(),a.end(),x)-a.begin();
    int r=upper_bound(a.begin(),a.end(),x)-a.begin();
    cout<<r-1<<endl;
}

int32_t main(){
    int x;cin>>x;
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    solve(a,x);
}