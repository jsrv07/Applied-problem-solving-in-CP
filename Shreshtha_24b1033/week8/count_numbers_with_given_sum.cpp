// User function Template for C++

class Solution {
    int mod=1e9+7;
    private:
    int solve(int n,int sum, vector<vector<int>>& memo){
        if(n==0) return sum==0;
        if(sum==0) return 1;
        if(memo[n][sum] != -1) return memo[n][sum];
        int ans=0;

        for(int i=0;i<=9;i++){
            if(sum-i>=0) ans= (ans+solve(n-1,sum-i,memo))%mod;
        }
        return memo[n][sum]=ans;
    }
  public:
    long int countWays(int n, int sum) {
        // code here
        vector<vector<int>> memo(n+1,vector<int>(sum+1,-1));
        int ans=0;
        for(int i=1;i<=9;i++){
            if(sum-i>=0) ans= (ans+solve(n-1,sum-i,memo))%mod;
        }
        if(ans==0) return -1;
        return ans;

    }
};