class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> current;
        function<void(int, int, int)> backtrack = [&](int start, int remaining, int count) {
            if (remaining == 0 && count == k) {
                result.push_back(current);
                return;
            }
            if (count > k || remaining < 0) return; // Invalid state
            for (int i = start; i <= 9; ++i) {
                current.push_back(i);
                backtrack(i + 1, remaining - i, count + 1);
                current.pop_back();
            }
        };
        backtrack(1, n, 0);
        return result;
    }
};