class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        const int el=1e9;
        vector<int>dp(amount+1,el);
        dp[0]=0;
        for(int coin: coins){
            for(int i=coin;i<=amount;++i){
                if(dp[i-coin]!=el){
                    dp[i]=min(dp[i],dp[i-coin]+1);
                }
            }
        }
        return dp[amount]==el?-1:dp[amount];
    }
};


// class Solution {//top down approach
// public:
//     int helper(vector<int>& coins,int rem,int idx,vector<vector<int>>& dp){
//         if(rem==0) return 0;
//         if(rem<0 || idx<0) return INT_MAX;
//         if(dp[idx][rem]!=-1) return dp[idx][rem];
//         int first=helper(coins,rem,idx-1,dp);
//         int second=helper(coins,rem-coins[idx],idx,dp);
//         if(second!=INT_MAX) second+=1;
//         return dp[idx][rem]=min(first,second);
//     }
//     int coinChange(vector<int>& coins, int amount) {
//         sort(coins.begin(),coins.end());
//         vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
//         int result=helper(coins,amount,coins.size()-1,dp);
//         if(result==INT_MAX) return -1;
//         return result;
//     }
// };


// class Solution {//brute force approach
// public:
//     int helper(vector<int>& coins,int rem,int idx,int ct){
//         if(rem==0) return ct;
//         if(rem<0 || idx<0) return INT_MAX;
//         int first=helper(coins,rem,idx-1,ct);
//         int second=helper(coins,rem-coins[idx],idx,ct+1);
//         return min(first,second);
//     }
//     int coinChange(vector<int>& coins, int amount) {
//         sort(coins.begin(),coins.end());
//         int result=helper(coins,amount,coins.size()-1,0);
//         if(result==INT_MAX) return -1;
//         return result;
//     }
// };