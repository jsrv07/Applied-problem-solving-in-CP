#include <bits/stdc++.h>
using namespace std;
#define int long long

int koko(vector<int>& a, int h){
    sort(a.begin(),a.end());
    int r= a[a.size()-1];
    int l=1;
    int mid;
    if(a.size()==1){
        if(a[0]%h==0)return a[0]/h;
        else return a[0]/h+1;
    }
    while(l<=r){
        mid=(l+r)/2;
        if(l==r)break;
        int time=0;
        for(int i=0;i<a.size();i++){
            time+= ceil(a[i]/(1.0*(mid)));
        }
        if(time<=h)r=mid;
        else l=mid+1;
    }
    return mid;
    
}

signed main(){
    int n;cin>>n;
    int x;cin>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    cout << koko(a,x);
}