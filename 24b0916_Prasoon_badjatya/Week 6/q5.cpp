#include <bits/stdc++.h>
using namespace std;

void helper(int ind, int sum, int k, vector<int> &curr, vector<int> &nums, vector<vector<int>> &ans) {
    if(ind == nums.size()){
        if(k == sum) ans.push_back(curr);
        return;
    }

    helper(ind+1, sum, k, curr, nums, ans);
    curr.push_back(nums[ind]);
    helper(ind+1, sum, k+nums[ind], curr, nums, ans);
    curr.pop_back();
}

vector<vector<int>> subsetsWithDup(vector<int>& nums, int sum) {
    vector<vector<int>> ans;
    vector<int> temp;
    helper(0, sum, 0, temp, nums, ans);
    return ans;
}

int main() {
    int s, sum;
    cin >> s >> sum;
    vector<int> nums(s);
    for (int i = 0; i < s; i++) cin >> nums[i];

    vector<vector<int>> ans = subsetsWithDup(nums, sum);
    for (auto& subset : ans) {
        cout << "[";
        for (auto& val : subset)
            cout << val << " ";
        cout << "]\n";
    }
}