class Solution {
public:
    int helper(int i,vector<int>& nums,vector<int>& dp){
        if(i==0) return nums[i];
        if(i==1) return max(nums[i],nums[i-1]);
        if(dp[i]!=-1){
            return dp[i];
        }
        else{
            return dp[i]=max(helper(i-1,nums,dp),helper(i-2,nums,dp)+nums[i]);
        }
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return helper(nums.size()-1,nums,dp);
    }
};