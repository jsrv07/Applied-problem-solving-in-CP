#include <bits/stdc++.h>
using namespace std;

void backtrack(int idx, int target, vector<int>& candidates, vector<int>& path, vector<vector<int>>& res) {
    if (target == 0) {
        res.push_back(path);
        return;
    }

    for (int i = idx; i < candidates.size(); ++i) {
        // Skip duplicates at same recursion level
        if (i > idx && candidates[i] == candidates[i - 1]) continue;

        if (candidates[i] > target) break; // pruning

        path.push_back(candidates[i]);
        backtrack(i + 1, target - candidates[i], candidates, path, res); // i + 1: use once
        path.pop_back(); // backtrack
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end()); // sort to handle duplicates
    vector<vector<int>> res;
    vector<int> path;
    backtrack(0, target, candidates, path, res);
    return res;
}

// Driver code
int main() {
    int n, target;
    cin >> n >> target;
    vector<int> candidates(n);
    for (int i = 0; i < n; ++i) cin >> candidates[i];

    vector<vector<int>> result = combinationSum2(candidates, target);
    for (const auto& comb : result) {
        for (int num : comb)
            cout << num << " ";
        cout << "\n";
    }

    return 0;
}
