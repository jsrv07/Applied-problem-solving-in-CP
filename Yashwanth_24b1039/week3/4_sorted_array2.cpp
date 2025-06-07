#include <bits/stdc++.h>

using namespace std;

bool search(vector<int>& nums, int target) {
    int low=0;
    int n=nums.size();
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target)return true;
        if(nums[low]==nums[mid] && nums[mid]==nums[high]){
            low++;
            high--;
            continue;
        }
        if(nums[mid]>=nums[low]){
            if(nums[mid]>=target && nums[low]<=target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(nums[mid]<=target && nums[high]>=target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return false;
    
}

int main(){

    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;

    cout<<search(nums,target);
}
