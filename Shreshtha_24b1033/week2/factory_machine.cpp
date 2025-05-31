#include <bits/stdc++.h>
using namespace std;
#define int long long

bool canMake(int time, const vector<int>&k, int t){
    int prod=0;
    for(int ki:k){
        prod+=time/ki;
        if(prod>=t)return true;
    }
    return false;
}

int minTime(int n, int t,const vector<int>&k){
    int low=1;
    int high= *min_element(k.begin(),k.end())*t;
    int ans=high;
    while(low<=high){
        int mid=(low+high)/2;
        if(canMake(mid,k,t)){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
signed main(){
    int n,t;
    cin>>n>>t;
    vector<int> k(n);
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
    cout<<minTime(n,t,k)<<endl;
}
