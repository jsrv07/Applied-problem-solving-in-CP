class Solution {
  public:
    int helper(int l,int r,string& s1,string& s2,vector<vector<int>>& dp){
        if(l<0 || r<0) return 0;
        
        if(dp[l][r]!=-1) return dp[l][r];
        
        if(s1[l]==s2[r]){
            return dp[l][r]=1+helper(l-1,r-1,s1,s2,dp);
        }
        else{
            return dp[l][r]=max(helper(l,r-1,s1,s2,dp),helper(l-1,r,s1,s2,dp));
        }
    }
    int lcs(string &s1, string &s2) {
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>>dp (n,vector<int>(m,-1));
        return helper(n-1,m-1,s1,s2,dp);
    }
};
