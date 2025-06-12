#include <bits/stdc++.h>
using namespace std;

bool searchRotatedWithDuplicates(const vector<int>& nums, int target) {
    int low = 0, high = (int)nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) return true;

        if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
            ++low;
            --high;
        }
        else if (nums[low] <= nums[mid]) {
            if (nums[low] <= target && target < nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else {
            if (nums[mid] < target && target <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    cout << (searchRotatedWithDuplicates(nums, target) ? "true\n" : "false\n");
    return 0;
}
