#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSumIS(vector<int>& arr) {
    int n = arr.size();
    vector<int> dp(n);

    // Initialize dp[i] with arr[i]
    for (int i = 0; i < n; ++i) {
        dp[i] = arr[i];
    }

    // Compute max sum of increasing subsequence ending at i
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + arr[i]);
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    cout << maxSumIS(arr) << endl;

    return 0;
}
