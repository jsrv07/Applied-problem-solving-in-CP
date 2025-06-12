#include <bits/stdc++.h>
using namespace std;

int findSingle(const vector<int>& nums) {
    int low = 0, high = (int)nums.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;
        if (mid % 2 == 1) --mid;

        if (nums[mid] == nums[mid + 1]) {
            low = mid + 2;
        }
        else {
            high = mid;
        }
    }
    return nums[low];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int& x : nums) cin >> x;

    cout << findSingle(nums) << '\n';
    return 0;
}
