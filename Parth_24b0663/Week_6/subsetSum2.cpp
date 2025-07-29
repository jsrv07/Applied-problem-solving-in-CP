class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void fn(vector<int>& a, int i) {
        ans.push_back(temp);
        for (int k = i; k < a.size(); ++k) {
            if (k > i && a[k] == a[k - 1]) continue;
            temp.push_back(a[k]);
            fn(a, k + 1);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        fn(nums, 0);
        return ans;
    }
};