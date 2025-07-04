class Solution {
public:
    void backtrack(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
        result.push_back(current);

        for (int i = index; i < nums.size(); ++i) {
            // Skip duplicates at the same recursive level
            if (i > index && nums[i] == nums[i - 1]) continue;

            current.push_back(nums[i]);
            backtrack(i + 1, nums, current, result);
            current.pop_back();
        }
    }

    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        vector<vector<int>> result;
        vector<int> current;
        backtrack(0, nums, current, result);
        return result;
    }
};
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    system("pause");
    return 0;
}