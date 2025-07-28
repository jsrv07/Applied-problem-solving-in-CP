#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int minchanges(string& w1,string& w2,int i1,int i2,vector<vector<int>>& dp){
        if(i1==-1) return i2+1;
        if(i2==-1) return i1+1;
        if(dp[i1][i2]!=-1) return dp[i1][i2];
        if(w1[i1]==w2[i2]) return minchanges(w1,w2,i1-1,i2-1,dp);
        else{
            dp[i1][i2]=1+min({minchanges(w1,w2,i1-1,i2-1,dp),minchanges(w1,w2,i1-1,i2,dp),minchanges(w1,w2,i1,i2-1,dp)});
            return dp[i1][i2];
        }
    }
    int minDistance(string word1, string word2) {
        
        vector<vector<int>> dp(word1.size(),vector<int>(word2.size(),-1));
        return minchanges(word1,word2,word1.size()-1,word2.size()-1,dp);
    }
};