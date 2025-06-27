class Solution {
public:
    void backtrack(int index, vector<int>& candidates, int target, vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        if (index == candidates.size() || target < 0) return;

        if (candidates[index] <= target) {
            current.push_back(candidates[index]);
            backtrack(index, candidates, target - candidates[index], current, result); 
            current.pop_back();
        }

        backtrack(index + 1, candidates, target, current, result);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(0, candidates, target, current, result);
        return result;
    }
};

#include<bits/stdc++.h>
using namespace std;

int main() {
    
    system("pause");
    return 0;
}