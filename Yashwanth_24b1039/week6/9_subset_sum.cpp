#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    bool checsum_sum(vector<int>& arr,int sum,int idx,int sm,vector<vector<int>>& dp){
        
        if(sum==0) return true;
        if(idx==0) return arr[0]==sum;
        if(sm<sum) return false;
        if(sum<0) return false;
        if(dp[idx][sum]!=-1) return dp[idx][sum];
        
        dp[idx][sum]=checsum_sum(arr,sum,idx-1,sm-arr[idx],dp) || checsum_sum(arr,sum-arr[idx],idx-1,sm-arr[idx],dp);
        return dp[idx][sum];
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        
        int sm=accumulate(arr.begin(),arr.end(),0);
        vector<vector<int>> dp(arr.size(),vector<int>(sum+1,-1));
        return checsum_sum(arr,sum,arr.size()-1,sm,dp);
    }
};