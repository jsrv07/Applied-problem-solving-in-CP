#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int noofways(vector<int>& nums,int target,int idx,vector<vector<int>>& dp){
        if(target<0) return 0;
        if(dp[idx][target]!=-1) return dp[idx][target];
        int sm=accumulate(nums.begin(),nums.begin()+idx+1,0);
        if(idx==0){
            if(target==0){
                return (sm==0? 2: 1);
            }
            else{
                return sm==target;
            }
        }
        if(sm<target) return 0;
        dp[idx][target]=(noofways(nums,target,idx-1,dp)+noofways(nums,target-nums[idx],idx-1,dp));
        return dp[idx][target];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sm=accumulate(nums.begin(),nums.end(),0);
        if(sm<target) return 0;
        if((sm-target)%2==1) return 0;
        target=(target+sm)/2;
        if(target<0) return 0;
        vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));
        return noofways(nums,target,nums.size()-1,dp);
    }
};