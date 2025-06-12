#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(vector<int> a, int low, int high, int x){
    int result=-1;
    while(low<=high){
        int mid= (low+high )/2;
        if(a[mid]==x){
            result=mid;
            high=mid-1;
        }
        else if(a[mid]<x) low=mid+1;
        else if(a[mid]>x) high=mid-1;
    }
    cout<<result<<endl;
}

int32_t main(){
    int x;cin>>x;
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    solve(a,0,n-1,x);
}