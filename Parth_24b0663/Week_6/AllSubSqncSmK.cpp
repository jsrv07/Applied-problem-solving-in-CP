#include <bits/stdc++.h>
using namespace std;

void findSubsequence(int ind, int sum, int k, vector<int> &cur, vector<int> &arr, vector<vector<int>> &res) {
    int n = arr.size();
    if (ind == n) {
        if (sum == k) {
            res.push_back(cur);
        }
        return;
    }
    findSubsequence(ind + 1, sum, k, cur, arr, res);
    cur.push_back(arr[ind]);
    findSubsequence(ind + 1, sum + arr[ind], k, cur, arr, res);
    cur.pop_back();
}

vector<vector<int>> subsequencesSumK(vector<int> &arr, int k) {
    vector<vector<int>> res;
    vector<int> cur;
    findSubsequence(0, 0, k, cur, arr, res);
    return res;
}

