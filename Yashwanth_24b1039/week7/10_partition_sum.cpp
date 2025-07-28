#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool solve(vector<int>& nums,int x,int curr_sum,int target,vector<vector<int>>& dp){
        if(target==0){
            return true;
            }
        if(x==0) return nums[0]==target;
        if(target<0) return false;
        if(curr_sum<target) return false;
        if(dp[x][target]!=-1) return dp[x][target];
        curr_sum-=nums[x];
        dp[x][target]=solve(nums,x-1,curr_sum,target,dp) || solve(nums,x-1,curr_sum,target-nums[x],dp);
        return dp[x][target];
    }
    bool canPartition(vector<int>& nums) {
        int sm=accumulate(nums.begin(),nums.end(),0);
        if(sm%2==1){
            return false;
        }
        else{
            sort(nums.begin(),nums.end());
            vector<vector<int>> dp(nums.size(),vector<int>(sm+1,-1));
            return solve(nums,nums.size()-1,sm,sm/2,dp);
        }
    }
};