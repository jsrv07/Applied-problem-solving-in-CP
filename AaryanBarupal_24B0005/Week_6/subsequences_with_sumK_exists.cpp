class Solution {
  public:
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
    vector<vector<bool>>dp(n+1,vector<bool>(k+1,false));
    
    for(int i=0;i<=n;++i){
        dp[i][0]=true;
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=k;++j){
            dp[i][j]=dp[i-1][j];
            if(j>=arr[i-1]){
                dp[i][j] = dp[i][j] || dp[i - 1][j - arr[i - 1]];
            }
        }
    }
    return dp[n][k];
    }
};