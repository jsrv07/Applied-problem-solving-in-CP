#include <bits/stdc++.h>
using namespace std;
using ll=long long;
class Solution {
public:
    
    int noofcoins(vector<int>& coins,int amount,int idx,vector<vector<int>>& dp){ 
        if(dp[idx][amount]!=-1) return dp[idx][amount];
        if(idx==0){
            if(amount%coins[0]==0) return amount/coins[0];
            else return 1e9;
        }
        if(amount<coins[idx]) return noofcoins(coins,amount,idx-1,dp);
        dp[idx][amount]=min(noofcoins(coins,amount,idx-1,dp),1+noofcoins(coins,amount-coins[idx],idx,dp));
        return dp[idx][amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0) return 0;
        vector<vector<int>> dp(coins.size(),vector<int>(amount+1,-1));
        int ans=noofcoins(coins,amount,coins.size()-1,dp);
        if(ans>=1e9) return -1;
        else return ans;
    }
};