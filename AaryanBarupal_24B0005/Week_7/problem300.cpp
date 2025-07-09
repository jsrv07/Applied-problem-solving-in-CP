class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>tails;
        for(int x: nums){
            auto it=lower_bound(tails.begin(),tails.end(),x);
            if(it==tails.end()){
                tails.push_back(x);
            }
            else{
                *it=x;
            }
        }
        return tails.size();
    }
};






// class Solution {//using dp
// public:
//     int helper(int i,vector<int>& nums,vector<int>& dp){
//         if(i==0) return 1;

//         if(dp[i]!=-1){
//             return dp[i];
//         }
//         else{
//             int ans=1;
//             for(int j=0;j<i;++j){
//                 if(nums[i]>nums[j]){
//                     ans=max(ans,helper(j,nums,dp)+1);
//                 }
//             }
//             return dp[i]=ans;
//         }
//     }
//     int lengthOfLIS(vector<int>& nums) {
//         vector<int>dp(nums.size(),-1);
//         int ans=0;
//         for(int i=0;i<nums.size();++i){
//             ans=max(ans,helper(i,nums,dp));
//         }
//         return ans;
//     }
// };