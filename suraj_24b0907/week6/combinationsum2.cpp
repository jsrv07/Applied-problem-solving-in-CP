#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> b;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> v;
        ss(target, 0, v, candidates, 0, candidates.size());
        return b;
    }
    void ss(int target, int currentSum, vector<int>& v, vector<int>& candidates, int index, int size) {
        if (currentSum == target) {
            b.push_back(v);
            return;}
        for (int i = index; i < size; ++i) {
            if (i > index && candidates[i] == candidates[i - 1]) continue;
            if (currentSum + candidates[i] > target) break;
            v.push_back(candidates[i]);
            ss(target, currentSum + candidates[i], v, candidates, i + 1, size);
            v.pop_back();
        }
    }
};