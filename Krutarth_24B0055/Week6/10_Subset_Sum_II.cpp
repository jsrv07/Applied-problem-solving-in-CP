class Solution {
    void dfs(vector<int>& nums, int index, vector<int>& subset, vector<vector<int>>& res){
        res.push_back(subset);
        for(int i=index; i<nums.size(); ++i){
            if(i > index && nums[i] == nums[i - 1]) continue;
            
            subset.push_back(nums[i]);
            dfs(nums, i + 1, subset, res);
            subset.pop_back();
        }
    }

  public:
    vector<vector<int>> printUniqueSubsets(vector<int>& nums){
        vector<vector<int>> res;
        vector<int> subset;
        sort(nums.begin(), nums.end());
        dfs(nums, 0, subset, res);
        return res;
    }
};
