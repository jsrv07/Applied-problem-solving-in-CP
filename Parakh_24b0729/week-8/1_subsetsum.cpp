int findTargetSumWays(vector<int>& nums, int target) {
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if ((sum + target) % 2 || abs(target) > sum) return 0;
    int S = (sum + target) / 2;
    vector<int> dp(S + 1, 0); dp[0] = 1;
    for (int num : nums)
        for (int i = S; i >= num; --i)
            dp[i] += dp[i - num];
    return dp[S];
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    system("pause");
    return 0;
}