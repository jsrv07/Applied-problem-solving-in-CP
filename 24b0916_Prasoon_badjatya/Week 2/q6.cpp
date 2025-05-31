#include <bits/stdc++.h>
using namespace std;

vector<int> threeSum(const vector<int>& nums, int target) {
    int n = (int)nums.size();
    if (n < 3) return {};

    vector<pair<int,int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = {nums[i], i+1};
    }
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n-2; i++) {
        int l = i+1, r = n-1;
        while (l < r) {
            long long sum = (long long)arr[i].first + arr[l].first + arr[r].first;
            if (sum == target) {
                return {arr[i].second, arr[l].second, arr[r].second};
            } else if (sum < target) {
                l++;
            } else {
                r--;
            }
        }
    }
    return {};
}

int main() {
    int n, x; 
    cin >> n >> x;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    vector<int> result = threeSum(nums, x);
    if (result.empty()) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        for (int idx : result) cout << idx << " ";
        cout << endl;
    }

    return 0;
}
