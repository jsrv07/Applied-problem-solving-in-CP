#include <bits/stdc++.h>
using namespace std;

void backtrack(int start, vector<int>& nums, vector<int>& path, vector<vector<int>>& res) {
    res.push_back(path);

    for (int i = start; i < nums.size(); ++i) {
        // Skip duplicates at same recursion level
        if (i > start && nums[i] == nums[i - 1]) continue;

        path.push_back(nums[i]);
        backtrack(i + 1, nums, path, res);
        path.pop_back(); // backtrack
    }
}

vector<vector<int>> printUniqueSubset(vector<int>& nums) {
    sort(nums.begin(), nums.end());  // Sort to handle duplicates
    vector<vector<int>> res;
    vector<int> path;

    backtrack(0, nums, path, res);
    return res;
}

// Driver for testing
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; ++i) cin >> nums[i];

    vector<vector<int>> subsets = printUniqueSubset(nums);

    // Sort each subset (as required in GFG), though backtracking already maintains order
    for (auto& subset : subsets)
        sort(subset.begin(), subset.end());

    for (auto& subset : subsets) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i + 1 < subset.size()) cout << " ";
        }
        cout << "]";
    }
    cout << "\n";

    return 0;
}
