class Solution {
public:
    int helper(int i,vector<int>& dp,vector<int>& cost){
        if(i==0) return cost[i];
        if(i==1) return cost[i];
        if(dp[i]!=-1){
            return dp[i];
        }
        else{
            return dp[i]=min(helper(i-1,dp,cost)+cost[i],helper(i-2,dp,cost)+cost[i]);
        }
    }
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        vector<int>dp(cost.size(),-1);
        return helper(dp.size()-1,dp,cost);
    }
};