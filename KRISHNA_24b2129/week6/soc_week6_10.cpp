#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void backtrack(vector<int>& nums, int index, vector<int>& curr, vector<vector<int>>& result) {
    result.push_back(curr);

    for (int i = index; i < nums.size(); ++i) {
        // Skip duplicates at the same level
        if (i > index && nums[i] == nums[i - 1]) continue;

        curr.push_back(nums[i]);
        backtrack(nums, i + 1, curr, result);
        curr.pop_back();  // backtrack
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());  // sort to bring duplicates together
    vector<vector<int>> result;
    vector<int> curr;
    backtrack(nums, 0, curr, result);
    return result;
}

int main() {
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>> result = subsetsWithDup(nums);

    for (const auto& subset : result) {
        cout << "[";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}