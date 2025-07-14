class Solution {
  public:
    int maxSumIS(vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        vector<int> dp(n+1,0);
        for(int i=0;i<n;i++) dp[i]=arr[i];
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[i]>arr[j] && dp[i] <dp[j]+arr[i])
                    dp[i]=dp[j]+arr[i];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(ans<dp[i]) ans=dp[i];
        }
        return ans;
    }
};