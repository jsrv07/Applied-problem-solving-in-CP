#include <bits/stdc++.h>
using namespace std;

void backtrack(int k, int n, int start, vector<int> &path, vector<vector<int>> &res) {
    if (k == 0 && n == 0) {
        res.push_back(path);
        return;
    }
    if (k == 0 || n <= 0) return;

    for (int i = start; i <= 9; ++i) {
        path.push_back(i);
        backtrack(k - 1, n - i, i + 1, path, res);
        path.pop_back(); // backtrack
    }
}

vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>> res;
    vector<int> path;
    backtrack(k, n, 1, path, res);
    return res;
}

// For CP testing
int main() {
    int k, n;
    cin >> k >> n;

    vector<vector<int>> ans = combinationSum3(k, n);
    for (auto &vec : ans) {
        for (int num : vec)
            cout << num << " ";
        cout << "\n";
    }

    return 0;
}
