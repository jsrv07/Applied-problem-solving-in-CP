#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
int count=0;
    int findTargetSumWays(vector<int>& nums, int target) {
        ss(nums,target,0,0,nums.size());
        return count;
    }
    void ss(vector<int>& nums,int t,int i,int sum,int size){
        if(i==size){
            if(sum==t) count+=1;
            return ;
        }
        ss(nums,t,i+1,sum+nums[i],size);
        ss(nums,t,i+1,sum-nums[i],size);
    }
};