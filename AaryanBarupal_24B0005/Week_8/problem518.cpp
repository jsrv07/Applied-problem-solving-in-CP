class Solution {//top down approach
public:
    int helper(int curr_sum,vector<int>& coins,int index,vector<vector<int>>& dp){
        if(curr_sum==0) return 1;
        if(curr_sum<0 || index==coins.size()) return 0;
        if(dp[index][curr_sum]!=-1) return dp[index][curr_sum];
        int include=helper(curr_sum-coins[index],coins,index,dp);
        int exclude=helper(curr_sum,coins,index+1,dp);
        return dp[index][curr_sum]=include+exclude;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        return helper(amount,coins,0,dp);
    }
};


// class Solution {//brute force approach
// public:
//     int helper(int curr_sum,vector<int>& coins,int index){
//         if(curr_sum==0) return 1;
//         if(curr_sum<0 || index==coins.size()) return 0;
//         int include=helper(curr_sum-coins[index],coins,index);
//         int exclude=helper(curr_sum,coins,index+1);
//         return include+exclude;
//     }
//     int change(int amount, vector<int>& coins) {
//         return helper(amount,coins,0);
//     }
// };