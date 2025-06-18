#include<bits/stdc++.h>
using namespace std;
int floor_of_sqrt(int n){
    if(n==0 || n==1) return n;
    int l=1;
    int r=n/2;
    int ans=1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if((long long)mid*mid<=n) {
            ans=mid;
            l=mid+1;
        } else {
            r=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<floor_of_sqrt(n);
}