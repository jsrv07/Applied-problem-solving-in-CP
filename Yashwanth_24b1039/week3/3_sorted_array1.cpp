#include<bits/stdc++.h>

using namespace std;


int search(vector<int>& nums, int target) {
    int low=0,high=nums.size()-1,mid=(low+high)/2;
    int idx=0;
    while(low<=high and mid>0){
        mid=(low+high)/2;
        if(nums[mid]<nums[0] and nums[mid-1]>=nums[0]){ 
            idx=mid;
            break;
        }
        else if(nums[mid]>nums[0]) low=mid+1;
        else high=mid;
    }
    cout<<idx;
    bool reverse=false;
    if(idx==0 and nums[nums.size()-1]<nums[0]){
        reverse=true;
    }

    low=0;
    high=nums.size()-1;
    if(idx!=0){
        if(target==nums[0]) return 0;
        else if(target>nums[0]) high=idx-1;
        else low=idx;
    }

    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target)  (reverse? (low=mid+1):(high=mid-1));
        else (reverse? (high=mid-1):(low=mid+1));
    }
    return -1;
}

int main(){

    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    cout<<search(nums,target);
}