class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        sort(candidates.begin(), candidates.end()); 
        function<void(int, int)> backtrack = [&](int start, int remaining) {
            if (remaining == 0) {
                result.push_back(current);
                return;
            }
            for (int i = start; i < candidates.size(); ++i) {
                if (i > start && candidates[i] == candidates[i - 1]) continue; 
                if (candidates[i] > remaining) break; 
                current.push_back(candidates[i]);
                backtrack(i + 1, remaining - candidates[i]);
                current.pop_back();
            }
        };
        backtrack(0, target);
        return result;
    }
};