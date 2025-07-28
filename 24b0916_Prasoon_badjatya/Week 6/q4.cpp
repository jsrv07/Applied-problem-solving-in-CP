#include <bits/stdc++.h>
using namespace std;

void helper(int start, int k, vector<int>& temp, vector<int>& arr, int n, int sum, vector<vector<int>>& ans) {
    if (start == arr.size()) {
        if (temp.size() == k && sum == n) {
            ans.push_back(temp);
        }
        return;
    }

    
    if (temp.size() > k || sum > n) return;

    
        temp.push_back(arr[start]);
    helper(start + 1, k, temp,  arr, n, sum + arr[start], ans);
    temp.pop_back(); 

    
    helper(start + 1, k, temp, arr, n, sum, ans);
}

vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>> ans;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> temp;
    helper(0, k, temp, arr, n, 0, ans);
    return ans;
}


int main() {
    int k, n;
    cin >> k >> n;

    vector<vector<int>> ans = combinationSum3(k, n);
    for (auto& subset : ans) {
        cout << "[";
        for (auto& val : subset)
            cout << val << " ";
        cout << "]\n";
    }
}