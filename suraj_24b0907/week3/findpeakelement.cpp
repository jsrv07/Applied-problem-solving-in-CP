#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0,right=nums.size()-1,mid;
        mid=(left+right)/2;
        if(right==0){return 0;}
        while(left <= right){
            if(mid==0) {
                if(nums[mid]>nums[mid+1]){return mid;}
                else {left=mid+1;mid=(left+right)/2;continue;}
            }
            else if(mid==nums.size()-1){
                if(nums[mid]>nums[mid-1]){return mid;}
                else {right = mid-1;mid=(left+right)/2;continue;}
            }
            if((nums[mid]>nums[mid+1])&&(nums[mid]>nums[mid-1])){return mid;}
            else if(nums[mid+1]>nums[mid]){left=mid+1;}
            else if(nums[mid-1]>nums[mid]){right=mid-1;}
            mid=(left+right)/2;
        }
        return mid;
    }
};