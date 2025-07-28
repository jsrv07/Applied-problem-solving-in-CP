#include <bits/stdc++.h>
using namespace std;

bool canPartition(vector<int>& nums) {
    int total = 0;
    for(auto n : nums) total+=n;
    if(total%2 == 1) return false;
    int target = total/2;
    vector<vector<bool>> dp(nums.size(), vector<bool> (target+1, false));
    for(int i(0); i<nums.size(); i++) dp[i][0] = true;
    if(nums[0] <= target) dp[0][nums[0]] = true;
    for(int i(1); i<nums.size(); i++){
        for(int j(1); j<=target; j++){
            if(nums[i]<=j) dp[i][j] = dp[i-1][j] || dp[i-1][j - nums[i]];
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[nums.size()-1][target];
}

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i(0); i<n; i++){
        cin >> nums[i];
    }
    cout << canPartition(nums);
}   