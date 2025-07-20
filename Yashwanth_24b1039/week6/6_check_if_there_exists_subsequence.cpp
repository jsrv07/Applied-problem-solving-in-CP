#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    bool check_sum(vector<int>& arr,int k,int idx,int sm,vector<vector<int>>& dp){
        
        if(k==0) return true;
        if(idx==0) return arr[0]==k;
        if(sm<k) return false;
        if(k<0) return false;
        if(dp[idx][k]!=-1) return dp[idx][k];
        
        dp[idx][k]=check_sum(arr,k,idx-1,sm-arr[idx],dp) || check_sum(arr,k-arr[idx],idx-1,sm-arr[idx],dp);
        return dp[idx][k];
    }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        
        int sm=accumulate(arr.begin(),arr.end(),0);
        vector<vector<int>> dp(n,vector<int>(k+1,-1));
        return check_sum(arr,k,n-1,sm,dp);
    }
};