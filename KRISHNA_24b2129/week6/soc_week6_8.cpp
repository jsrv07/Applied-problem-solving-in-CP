#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findCombinations(vector<int>& candidates, int target, int start, vector<int>& curr, vector<vector<int>>& result) {
    if (target == 0) {
        result.push_back(curr);
        return;
    }

    for (int i = start; i < candidates.size(); ++i) {
      
        if (i > start && candidates[i] == candidates[i - 1]) continue;

        if (candidates[i] > target) break;

        curr.push_back(candidates[i]);
        findCombinations(candidates, target - candidates[i], i + 1, curr, result);
        curr.pop_back();
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> candidates;
    int target;
    for(int i=0;i<n;i++){
        cin>>candidates[i];
    }
    cin>>target;
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> result;
    vector<int> curr;

    findCombinations(candidates, target, 0, curr, result);
    for (auto& comb : result) {
        for (int num : comb) cout << num << " ";
        cout << endl;
    }
}