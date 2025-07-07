#include <bits/stdc++.h>
using namespace std;

int computeSum(const vector<int>& nums, int divisor) {
    int total = 0;
    for (int num : nums) {
        total += (num + divisor - 1) / divisor; // Equivalent to ceil(num / divisor)
    }
    return total;
}

int smallestDivisor(vector<int>& nums, int threshold) {
    int low = 1, high = *max_element(nums.begin(), nums.end());
    int answer = high;

    while (low <= high) {
        int mid = (low + high) / 2;
        int currSum = computeSum(nums, mid);

        if (currSum <= threshold) {
            answer = mid;
            high = mid - 1; // try smaller divisor
        } else {
            low = mid + 1; // need larger divisor to reduce sum
        }
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, threshold;
    cin >> n >> threshold;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    cout << smallestDivisor(nums, threshold) << '\n';
    return 0;
}
