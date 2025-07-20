#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int noofways(vector<int>& coins,int amount,int idx,vector<vector<int>>& dp){

        if(amount<0) return 0;
        if(amount==0) return 1;
        if(dp[idx][amount]!=-1) return dp[idx][amount];
        if(idx==0){
            if(amount%coins[0]==0) return 1;
            else return 0;
        }
        dp[idx][amount]=noofways(coins,amount,idx-1,dp)+noofways(coins,amount-coins[idx],idx,dp);
        return dp[idx][amount];
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return noofways(coins,amount,n-1,dp);
    }
};