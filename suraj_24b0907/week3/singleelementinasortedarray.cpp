#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int mid=nums.size()/2;
        if(mid%2==0){mid+=1;}
        int left=0,right=nums.size()-1;
        while(left<right){
            if(nums[mid-1]==nums[mid]){left=mid+1;}
            else if(nums[mid]==nums[mid+1]){right=mid-1;}
            else {return nums[mid];}
            mid=(left+right)/2;
            if(mid%2==0){mid+=1;}
        }
        return nums[mid-1];
    }
};