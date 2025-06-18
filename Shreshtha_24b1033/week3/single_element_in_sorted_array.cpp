#include <bits/stdc++.h>
using namespace std;
#define int long long

int search(vector<int> nums){
    int left =0;
    int right = nums.size()-1;
    while(left<right){
        int mid=(left+right)/2;
        if(mid%2!=0) mid--;
        if(nums[mid]==nums[mid+1]) left=mid+2;
        else right=mid-1;
        
    }
    return nums[left];
}

signed main(){
    int n;cin>>n;
    int x;cin>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    cout << search(a,x);
}