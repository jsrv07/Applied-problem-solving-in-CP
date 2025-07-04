class Solution {
public:
    void backtrack(int k, int n, int start, vector<int>& current, vector<vector<int>>& result) {
        if (k == 0 && n == 0) {
            result.push_back(current);
            return;
        }

        if (k == 0 || n <= 0) return;

        for (int i = start; i <= 9; ++i) {
            current.push_back(i);
            backtrack(k - 1, n - i, i + 1, current, result); // i + 1 to avoid reuse
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(k, n, 1, current, result);
        return result;
    }
};

#include<bits/stdc++.h>
using namespace std;

int main() {
    
    system("pause");
    return 0;
}