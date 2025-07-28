#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool can_match(string& s,string& p,int m,int n,vector<vector<int>>& dp){
        if(n==0){
            if(p[0]=='*') return true;
            else if(m==0){
                if(p[0]=='?' || p[0]==s[0]) return true;
                return false;
            }
            else return false;
        }
        if(m==0){
            int cnt=0;
            for(int i=n;i>=0;i--){
                if(p[i]!='*'){
                    if(p[i]==s[0] || p[i]=='?') cnt++;
                    else return false;
                }
            }
            if(cnt>1) return false;
            return true;
        }
        if(dp[m][n]!=-1) return dp[m][n];
        if(s[m]==p[n] || p[n]=='?') return can_match(s,p,m-1,n-1,dp);
        if(p[n]=='*'){
            dp[m][n]=(can_match(s,p,m-1,n,dp) || can_match(s,p,m,n-1,dp) || can_match(s,p,m-1,n-1,dp));
            return dp[m][n];
        }
        return false;
    }
    bool isMatch(string s, string p) {
        
        int m,n;
        m=s.size();
        n=p.size();
        if(n==0 && m==0) return true;
        if(n==0) return false;
        if(m==0){
            for(int i=n-1;i>=0;i--){
                if(p[i]!='*') return false;
            }
            return true;
        }
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return can_match(s,p,m-1,n-1,dp);
    }
};