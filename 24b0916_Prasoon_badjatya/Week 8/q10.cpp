#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> nums){
    vector<int> dp = nums;
    for(int i(1); i<nums.size(); i++){
        for(int j(0); j<i; j++){
            if(nums[j] < nums[i]) dp[i] = max(dp[i], dp[j]+nums[i]);
        }
    }
    int ans = 0;
    for(int i(0); i<nums.size(); i++){
        ans = max(ans, dp[i]);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << maxSum(nums);
}