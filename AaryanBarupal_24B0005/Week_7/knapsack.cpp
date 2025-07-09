class Solution {
  public:
    int helper(int i,int remaining,vector<int>& wt,vector<int>& val,vector<vector<int>>& dp){
        if(i<0 || remaining==0) return 0;
        if(dp[i][remaining]!=-1) return dp[i][remaining];
        int not_take=helper(i-1,remaining,wt,val,dp);
        int take=0;
        if(wt[i]<=remaining){
            take=max(take,helper(i-1,remaining-wt[i],wt,val,dp)+val[i]);
        }
        return dp[i][remaining]=max(take,not_take);
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n=val.size();
        vector<vector<int>>dp(n,vector<int>(W+1,-1));
        return helper(n-1,W,wt,val,dp);
    }
};