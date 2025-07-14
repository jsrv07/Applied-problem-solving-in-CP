class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int tot=0;
        for(int i=0;i<nums.size();i++) tot+=nums[i];
        if(tot%2!=0) return false;
        int x = tot/2;
        vector<bool> dp(x+1,false);
        dp[0]=true;
        for(int i=0;i<nums.size();i++){
            for(int j=x;j>=0;j--){
                if(j-nums[i]>=0 && dp[j-nums[i]]) dp[j]=true;
            }
        }
        return dp[x];
    }
};