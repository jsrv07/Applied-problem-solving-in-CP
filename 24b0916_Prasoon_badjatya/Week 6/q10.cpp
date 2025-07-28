#include <bits/stdc++.h>
using namespace std;

void helper(int start, vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans) {
    ans.push_back(temp);

    for (int i = start; i < nums.size(); i++) {
        if (i > start && nums[i] == nums[i - 1]) continue;  
        temp.push_back(nums[i]);
        helper(i + 1, nums, temp, ans);
        temp.pop_back();  
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());  
    vector<vector<int>> ans;
    vector<int> temp;
    helper(0, nums, temp, ans);
    return ans;
}

int main() {
    int s;
    cin >> s;
    vector<int> nums(s);
    for (int i = 0; i < s; i++) cin >> nums[i];

    vector<vector<int>> ans = subsetsWithDup(nums);
    for (auto& subset : ans) {
        cout << "[";
        for (auto& val : subset)
            cout << val << ",";
        cout << "]\n";
    }
}
