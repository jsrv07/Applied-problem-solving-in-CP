class Solution {
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        vector<int> dp(W+1,0);
        for(int i=1;i<=wt.size();i++){
            for(int j=W;j>=wt[i-1];j--) dp[j]=max(dp[j],dp[j-wt[i-1]]+val[i-1]);
        }
        return dp[W];
    }
};