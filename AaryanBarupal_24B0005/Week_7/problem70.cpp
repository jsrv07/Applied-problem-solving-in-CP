class Solution {
public:
    int helper(int i,vector<int>& dp){
        if(i==0) return 1;
        if(i==1) return 1;
        if(dp[i]!=-1){
            return dp[i];
        }
        else{
            return dp[i]=helper(i-1,dp)+helper(i-2,dp);
        }
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return helper(n,dp);
    }
};