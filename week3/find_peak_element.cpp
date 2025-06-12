#include <bits/stdc++.h>
using namespace std;
#define int long long

int search(vector<int> nums){
    if(nums.size()==1) return 0;
    if(nums[1]<nums[0]) return 0;
    if(nums[nums.size()-1]>nums[nums.size()-2]) return nums.size()-1;
    int left =0;
    int right = nums.size()-1;
    while(left<=right){
        int mid=(left+right)/2;    
        if(nums[mid]>nums[mid+1])right=mid-1;
        else left=mid+1;    
    }
    return left;
}

signed main(){
    int n;cin>>n;
    int x;cin>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    cout << search(a,x);
}