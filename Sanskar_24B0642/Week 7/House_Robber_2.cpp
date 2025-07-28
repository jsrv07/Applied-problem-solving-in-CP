#include <iostream>
#include <vector>
using namespace std;

int robLinear(vector<int>& nums, int start, int end) {
    int prev2 = 0, prev1 = 0;

    for (int i = start; i <= end; ++i) {
        int curr = max(prev1, nums[i] + prev2);
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}

int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];

    // Exclude first or last house
    int option1 = robLinear(nums, 0, n - 2);
    int option2 = robLinear(nums, 1, n - 1);

    return max(option1, option2);
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << rob(nums) << endl;

    return 0;
}
