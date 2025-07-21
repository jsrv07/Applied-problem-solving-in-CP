class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        vector<int> dp(nums.size()+1,0);
        //rob from 0 to n-2
        dp[0]=0;
        dp[1]=nums[0];
        for(int i=2;i<nums.size();i++)
        dp[i]=max(dp[i-1],dp[i-2]+nums[i-1]);
        int ans1=dp[nums.size()-1];
        //rob from 1 to n-1
        dp[0]=0;
        dp[1]=nums[1];
        for(int i=2;i<nums.size();i++)
        dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        int ans2=dp[nums.size()-1];
        return max(ans1,ans2);
    }
};