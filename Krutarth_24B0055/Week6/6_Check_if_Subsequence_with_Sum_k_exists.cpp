class Solution {
  public:
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        vector<bool> dp(k + 1, false);
        dp[0] = true;
        for (int num : arr) {
            for (int j = k; j >= num; --j) {
                dp[j] = dp[j] || dp[j - num];
            }
        }
        return dp[k];
    }
};
