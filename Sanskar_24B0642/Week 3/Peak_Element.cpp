#include <bits/stdc++.h>
using namespace std;

int findPeakElement(const vector<int>& nums) {
    int low = 0, high = (int)nums.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] > nums[mid + 1])
            high = mid;
        else
            low = mid + 1;
    }

    return low;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int& x : nums) cin >> x;

    cout << findPeakElement(nums) << '\n';
    return 0;
}
