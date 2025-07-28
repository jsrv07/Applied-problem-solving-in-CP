#include <bits/stdc++.h>
using namespace std;

void backtrack(int idx, int target, vector<int>& candidates, vector<int>& path, vector<vector<int>>& res) {
    if (target == 0) {
        res.push_back(path);
        return;
    }
    if (idx == candidates.size() || target < 0) return;

    // Include current element (can reuse)
    if (candidates[idx] <= target) {
        path.push_back(candidates[idx]);
        backtrack(idx, target - candidates[idx], candidates, path, res);
        path.pop_back();
    }

    // Exclude current element
    backtrack(idx + 1, target, candidates, path, res);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> res;
    vector<int> path;
    sort(candidates.begin(), candidates.end());  // optional for better pruning
    backtrack(0, target, candidates, path, res);
    return res;
}

// Driver code for CP
int main() {
    int n, target;
    cin >> n >> target;
    vector<int> candidates(n);
    for (int i = 0; i < n; ++i) cin >> candidates[i];

    vector<vector<int>> result = combinationSum(candidates, target);
    for (const auto& comb : result) {
        for (int num : comb)
            cout << num << " ";
        cout << "\n";
    }

    return 0;
}
