class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int tot=0;
        for(int i=0;i<nums.size();i++) tot+=nums[i];
        tot=tot+target;
        if(tot%2!=0) return 0;
        if(abs(target)>tot-target)return 0;
        int x = tot/2;
        vector<int> dp(x+1,0);
        dp[0]=1;
        for(int i=0;i<nums.size();i++){
            for(int j=x;j>=nums[i];j--){
                dp[j]+=dp[j-nums[i]];
            }
        }
        return dp[x];
    }
};