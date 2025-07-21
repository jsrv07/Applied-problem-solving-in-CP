class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int cnt=0;
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int j=1;j<=n;j++){
            for(int i=0;i+j-1<n;i++){
                int k=i+j-1;
                if(i==k) dp[i][i]=1;
                else if(i+1==k) dp[i][k]=(s[i]==s[k]);
                else dp[i][k]=(s[i]==s[k] && dp[i+1][k-1]);
                if(dp[i][k])cnt++;
            }
        }
        return cnt;
    }
};