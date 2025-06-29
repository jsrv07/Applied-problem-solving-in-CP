#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> b;
    bool isSubsetSum(vector<int>& arr, int sum) {
        sort(arr.begin(), arr.end());
        vector<int> v;
        ss(sum, 0, v, arr, 0, arr.size());
        if(b.size()>0){return true;}
        else{return false;}
    }
    void ss(int target, int currentSum, vector<int>& v, vector<int>& candidates, int index, int size) {
        if(b.size()>0){return;}
        if (currentSum == target) {
            b.push_back(v);
            return;}
        for (int i = index; i < size; ++i) {
            if(b.size()>0)return;
            if (i > index && candidates[i] == candidates[i - 1]) continue;
            if (currentSum + candidates[i] > target) break;
            v.push_back(candidates[i]);
            ss(target, currentSum + candidates[i], v, candidates, i + 1, size);
            v.pop_back();
        }
    }
};
