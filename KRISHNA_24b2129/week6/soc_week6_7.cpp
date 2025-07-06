#include <iostream>
#include <vector>
using namespace std;
void findCombinations(vector<int>& candidates, int target, vector<int>& curr, vector<vector<int>>& result, int index) {
    if (target == 0) {
        result.push_back(curr);
        return;
    }
    for (int i = index; i < candidates.size(); i++) {
        if (candidates[i] <= target) {
            curr.push_back(candidates[i]);
            findCombinations(candidates, target - candidates[i], curr, result, i); 
            curr.pop_back(); 
        }
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
    vector<vector<int>> result;
    vector<int> curr;  
    findCombinations(candidates, target, curr, result, 0);
    for (auto& comb : result) {
        for (int num : comb) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}