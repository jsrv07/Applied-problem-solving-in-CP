class Solution {//top down approach
public:
    bool helper(int i,int target,vector<int>& nums,vector<vector<int>>& dp){
        if(target==0) return true;
        if(i<0 || target<0) return false;
        if(dp[i][target]!=-1) return dp[i][target];
        bool not_take=helper(i-1,target,nums,dp);
        bool take=false;
        if(nums[i]<=target){
            take=(take || helper(i-1,target-nums[i],nums,dp));
        }
        return dp[i][target]=(take || not_take);
    }
    bool canPartition(vector<int>& nums) {
        int total=accumulate(nums.begin(),nums.end(),0);
        if(total % 2!=0) return false;
        int target=total/2;
        vector<vector<int>>dp(nums.size(),vector<int>(target+1,-1));
        return helper(nums.size()-1,target,nums,dp);
    }
};


// class Solution {//bottom up approach
// public:
//     bool canPartition(vector<int>& nums) {
//         int total=accumulate(nums.begin(),nums.end(),0);
//         if(total % 2!=0) return false;
//         int target=total/2;
//         vector<bool>dp(target+1,false);
//         dp[0]=true;
//         for(int num: nums){
//             if(dp[target]) return dp[target];
//             for(int j=target;j>=num;--j){
//                 dp[j]=dp[j] || dp[j-num];
//             }
//         }
//         return dp[target];
//     }
// };



// class Solution {//brute force approach
// public:
//     bool helper(int i,vector<int>& first,vector<int>& second,vector<int>& nums){
//         if(i<0){
//             return accumulate(first.begin(),first.end(),0)==accumulate(second.begin(),second.end(),0);
//         }
//         first.push_back(nums[i]);
//         bool one_way=helper(i-1,first,second,nums);
//         first.pop_back();
//         second.push_back(nums[i]);
//         bool second_way=helper(i-1,first,second,nums);
//         second.pop_back();
//         return (one_way || second_way);

//     }
//     bool canPartition(vector<int>& nums) {
//         vector<int>first;
//         vector<int>second;
//         return helper(nums.size()-1,first,second,nums);
//     }
// };