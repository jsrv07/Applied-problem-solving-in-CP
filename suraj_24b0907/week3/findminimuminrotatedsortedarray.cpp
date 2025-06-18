#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int t=nums.size();
        if(t==1){return nums[0];}
        if(nums[0]<nums[t-1]){return nums[0];}
        int left,right,mid;
        left=0;right=t-1;
        mid=(left+right)/2;
        while(left<=right){
            if(nums[mid]>nums[mid+1]){return nums[mid+1];}
            if(nums[mid-1]>nums[mid]){return nums[mid];}
            else if(nums[0]<nums[mid]){left=mid+1;}
            else {right=mid-1;}
            mid=(left+right)/2;
        }
        return 0;
        }
    
};