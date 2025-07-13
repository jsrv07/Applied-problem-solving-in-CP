class Solution {
    void dfs(vector<int>& candidates, int target, int start, vector<int>& comb, vector<vector<int>>& res){
        if(target == 0){
            res.push_back(comb);
            return;
        }

        for(int i=start; i<candidates.size(); ++i){
            if(i > start && candidates[i] == candidates[i - 1]) continue;
            if(candidates[i] > target) break;

            comb.push_back(candidates[i]);
            dfs(candidates, target - candidates[i], i + 1, comb, res);
            comb.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target){
        vector<vector<int>> res;
        vector<int> comb;
        sort(candidates.begin(), candidates.end());
        dfs(candidates, target, 0, comb, res);
        return res;
    }
};
    
