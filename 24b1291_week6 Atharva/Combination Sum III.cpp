class Solution {
public:
    vector<vector<int>> res;
    void dfs(vector<int>& path, int k, int n, int start) {
        if (k == 0 && n == 0) return res.push_back(path);
        for (int i = start; i <= 9; ++i) {
            if((i - 1 + (k + 1) / 2) * k > n) break;
            path.push_back(i);
            dfs(path, k - 1, n - i, i + 1);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> path;
        dfs(path, k, n, 1);
        return res;
    }
};