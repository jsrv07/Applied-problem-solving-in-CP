#include <bits/stdc++.h>
using namespace std;

    int findTargetSumWays(vector<int>& nums, int target) {
        int totalWays = 0;
        helper(nums, target, totalWays, 0, 0);
        return totalWays;
    }
    
    void helper(vector<int>& nums, int target, int& totalWays, int i, int temp) {
        if(i == nums.size()) {
            if(temp == target) totalWays++;
            return;
        }
        helper(nums, target, totalWays, i+1, temp + nums[i]);
        helper(nums, target, totalWays, i+1, temp - nums[i]);
    }


int main(){
    int n, target;
    cin >> n;
    vector<int> nums;
    for(int i(0); i<n; i++){
        cin >> nums[i];
    }
    cout << findTargetSumWays(nums, target);
}   