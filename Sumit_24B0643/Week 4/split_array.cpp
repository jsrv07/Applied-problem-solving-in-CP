#include <bits/stdc++.h>
using namespace std;

bool canSplit(const vector<int>& nums, int k, int maxSum) {
    int count = 1, currentSum = 0;
    for (int num : nums) {
        if (num > maxSum) return false;

        if (currentSum + num > maxSum) {
            count++;
            currentSum = num;
        } else {
            currentSum += num;
        }
    }
    return count <= k;
}

int splitArray(vector<int>& nums, int k) {
    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    int result = high;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (canSplit(nums, k, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int& x : nums) cin >> x;

    cout << splitArray(nums, k) << '\n';
    return 0;
}
