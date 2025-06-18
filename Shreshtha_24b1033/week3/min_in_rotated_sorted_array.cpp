#include <bits/stdc++.h>
using namespace std;
#define int long long

int search(vector<int> nums){
    int left =0;
    int right = nums.size()-1;
    int minm=5000;
    while(left<=right){
        int mid = (left+right)/2;
        if(nums[left]<=nums[mid]){
            minm= min(minm, nums[left]);
            left=mid+1;
        }
        else{
            minm=min(minm, nums[mid]);
            right=mid-1;
        }
    }
    return minm;
}
signed main(){
    int n;cin>>n;
    int x;cin>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    cout << search(a,x);
}