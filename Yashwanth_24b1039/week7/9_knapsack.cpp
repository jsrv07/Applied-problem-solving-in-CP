#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int max_value(int W,vector<int> & val, vector<int>& wt,int idx,int weight,vector<vector<int>>& dp){
        
        if(idx<0) return 0;
        if(dp[idx][weight]!=-1) return dp[idx][weight];
        int take=0;
        if(weight+wt[idx]<=W){
            take=val[idx]+max_value(W,val,wt,idx-1,weight+wt[idx],dp);
        }
        int not_take=max_value(W,val,wt,idx-1,weight,dp);
        dp[idx][weight]=max(take,not_take);
        return dp[idx][weight];
        
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        
        int n=val.size();
        vector<vector<int>> dp(n,vector<int>(W+1,-1));
        return max_value(W,val,wt,n-1,0,dp);
    }
};