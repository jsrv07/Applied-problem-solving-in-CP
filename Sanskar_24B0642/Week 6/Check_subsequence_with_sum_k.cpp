#include <bits/stdc++.h>
using namespace std;

bool isSubsequenceWithSumK(vector<int>& arr, int k) {
    vector<bool> dp(k + 1, false);
    dp[0] = true;

    for (int num : arr) {
        for (int j = k; j >= num; --j) {
            dp[j] = dp[j] || dp[j - num];
        }
    }

    return dp[k];
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) cin >> arr[i];

    cout << (isSubsequenceWithSumK(arr, k) ? "Yes" : "No") << "\n";

    return 0;
}
