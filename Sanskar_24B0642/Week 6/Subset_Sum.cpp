#include <bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int>& arr, int sum) {
    vector<bool> dp(sum + 1, false);
    dp[0] = true;  // sum 0 is always possible

    for (int num : arr) {
        for (int j = sum; j >= num; --j) {
            if (dp[j - num]) {
                dp[j] = true;
            }
        }
    }

    return dp[sum];
}

// Driver code
int main() {
    int n, sum;
    cin >> n >> sum;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << (isSubsetSum(arr, sum) ? "true" : "false") << "\n";
    return 0;
}
