#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left,right;
        auto it=min_element(nums.begin(),nums.end());
        int idx=distance(nums.begin(),it);
        if(target>=nums[0]){left=0;right=idx-1;}
        else{left = idx;right=nums.size()-1;}
        if(idx==0){left=0;right=nums.size()-1;}
        if(idx==0 && nums[0]==nums[nums.size()-1]){
            it=max_element(nums.begin(),nums.end());
            right=distance(nums.begin(),it);
            left=0;
        }
        int mid=(left+right)/2;
        while(left<=right){
            if(target>nums[mid]){left=mid+1;}
            else if(target<nums[mid]){right=mid-1;}
            else {break;}
            mid=(left+right)/2;
        }
        if(target==nums[mid]){return true;}
        else{return false;}
    }
};