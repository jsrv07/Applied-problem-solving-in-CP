#include <bits/stdc++.h>
using namespace std;

void helper(int start, vector<int>& temp, vector<int>& candidates, int target, int sum, vector<vector<int>>& ans) {
    if (sum == target) {
        ans.push_back(temp);
        return;
    }
    if (sum > target) return;

    for (int i = start; i < candidates.size(); i++) {
        if (i > start && candidates[i] == candidates[i - 1]) continue;
        temp.push_back(candidates[i]);
        helper(i + 1, temp, candidates, target, sum + candidates[i], ans);
        temp.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> temp;
    helper(0, temp, candidates, target, 0, ans);
    return ans;
}

int main() {
    int s, sum;
    cin >> s >> sum;
    vector<int> nums(s);
    for (int i = 0; i < s; i++) cin >> nums[i];

    vector<vector<int>> ans = combinationSum(nums, sum);
    for (auto& subset : ans) {
        cout << "[";
        for (auto& val : subset)
            cout << val << " ";
        cout << "]\n";
    }
}