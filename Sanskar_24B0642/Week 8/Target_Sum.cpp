#include <iostream>
#include <vector>
using namespace std;

int findTargetSumWays(vector<int>& nums, int target) {
    int total = 0;
    for (int num : nums) total += num;

    if ((target + total) % 2 != 0 || total < abs(target)) return 0;

    int subsetSum = (target + total) / 2;

    vector<int> dp(subsetSum + 1, 0);
    dp[0] = 1;

    for (int num : nums) {
        for (int i = subsetSum; i >= num; --i) {
            dp[i] += dp[i - num];
        }
    }

    return dp[subsetSum];
}

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << findTargetSumWays(nums, target) << endl;

    return 0;
}
