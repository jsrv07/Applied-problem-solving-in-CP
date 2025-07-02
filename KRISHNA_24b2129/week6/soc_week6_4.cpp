#include <bits/stdc++.h>
using namespace std;

void findCombinations(int k, int n, int start, vector<int>& path, vector<vector<int>>& result) {
    if (k == 0 && n == 0) {
        result.push_back(path);
        return;
    }
    
    for (int i = start; i <= 9; i++) {
        if (i > n) break;
        path.push_back(i);
        findCombinations(k - 1, n - i, i + 1, path, result);
        path.pop_back();
    }
}

vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>> result;
    vector<int> path;
    findCombinations(k, n, 1, path, result);
    return result;
}

int main() {
    int k, n;
    cin >> k >> n;

    vector<vector<int>> ans = combinationSum3(k, n);
    
    for (auto &comb : ans) {
        for (int num : comb) cout << num << " ";
        cout << endl;
    }
    
    return 0;
}