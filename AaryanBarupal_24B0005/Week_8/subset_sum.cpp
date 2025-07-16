class Solution {//bottom up approach
  public:
    int perfectSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(target+1,0));
        for(int i=0;i<=n;++i){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;++i){
            int val=arr[i-1];//this is the current element
            for(int sum=0;sum<=target;++sum){
                dp[i][sum]=dp[i-1][sum];
                if(val<=sum){
                    dp[i][sum]+=dp[i-1][sum-val];
                }
            }
        }
        return dp[n][target];
    }
};


// class Solution {//top down approach
//   public:
//     vector<vector<int>> dp;
//     int n;
//     int helper(int index,int rem,vector<int>& arr){
//         if(index==n) return rem==0?1:0;
//         if(dp[index][rem]!=-1) return dp[index][rem];
//         int ways=0;
//         ways+=helper(index+1,rem,arr);
//         if(arr[index]<=rem){
//             ways+=helper(index+1,rem-arr[index],arr);
//         }
//         return dp[index][rem]=ways;
//     }
//     int perfectSum(vector<int>& arr, int target) {
//         n=arr.size();
//         dp.assign(n,vector<int>(target+1,-1));
//         return helper(0,target,arr);
//     }
// };


// class Solution {//brute force
//   public:
//     void helper(vector<int>& arr,int curr_sum,int& target,int& answer,int start){
//         if(curr_sum==target){
//             answer++;
//         }
//         if(curr_sum>target || start==arr.size()){
//             return;
//         }
//         for(int i=start;i<arr.size();++i){
//             helper(arr,curr_sum+arr[i],target,answer,i+1);
//         }
//     }
//     int perfectSum(vector<int>& arr, int target) {
//         sort(arr.begin(),arr.end());
//         int answer=0;
//         int curr_sum=0;
//         helper(arr,curr_sum,target,answer,0);
//         return answer;
//     }
// };