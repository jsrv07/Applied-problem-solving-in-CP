class Solution {
public:
    int helper(int i,vector<int>& nums,vector<int>& dp){
        if(i==0) return nums[i];
        if(i==1) return max(nums[i],nums[i-1]);
        if(dp[i]!=-1){
            return dp[i];
        }
        else{
            return dp[i]=max(helper(i-1,nums,dp),helper(i-2,nums,dp)+nums[i]);
        }
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        
        vector<int>arr1(nums.begin(),nums.end()-1);
        vector<int>dp1(nums.size()-1,-1);
        int first=helper(arr1.size()-1,arr1,dp1);

        vector<int>arr2(nums.begin()+1,nums.end());
        vector<int>dp2(nums.size()-1,-1);
        int second=helper(arr2.size()-1,arr2,dp2);

        return max(first,second);
    }
};