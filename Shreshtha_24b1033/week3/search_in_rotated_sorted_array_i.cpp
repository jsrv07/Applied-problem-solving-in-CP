#include <bits/stdc++.h>
using namespace std;
#define int long long

int search(vector<int> nums, int target){
    int left =0;
    int right = nums.size()-1;
    while(left<=right){
        int mid = (left+right)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid]>=nums[left]){
            if(target>=nums[left] and target<=nums[mid]) right =  mid -1;
            else left =mid + 1;
        }
        else if(nums[mid]<=nums[right]){
            if(target>=nums[mid] and target<=nums[right]) left = mid + 1;
            else right = mid - 1;
        }
    }
    return -1;
}
signed main(){
    int n;cin>>n;
    int x;cin>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    cout << search(a,x);
}