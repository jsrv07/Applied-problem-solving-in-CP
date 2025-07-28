#include <bits/stdc++.h>
using namespace std;

int countSubsequences(int idx, int sum, int k, vector<int> &arr) {
    if (idx == arr.size()) {
        return sum == k ? 1 : 0;
    }

    // Include current element
    int take = countSubsequences(idx + 1, sum + arr[idx], k, arr);
    
    // Exclude current element
    int not_take = countSubsequences(idx + 1, sum, k, arr);

    return take + not_take;
}

int countSubsequencesWithSumK(vector<int> &arr, int k) {
    return countSubsequences(0, 0, k, arr);
}

// Driver code for CP
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << countSubsequencesWithSumK(arr, k) << "\n";
    return 0;
}
