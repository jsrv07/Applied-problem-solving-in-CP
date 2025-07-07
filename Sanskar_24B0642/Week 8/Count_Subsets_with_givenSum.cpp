#include <iostream>
#include <vector>
using namespace std;

int countSubsets(vector<int>& arr, int sum) {
    int n = arr.size();
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));

    // Base case: there's 1 way to make sum 0 (empty set)
    for (int i = 0; i <= n; ++i) {
        dp[i][0] = 1;
    }

    // Fill dp table
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= sum; ++j) {
            if (arr[i - 1] <= j)
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    return dp[n][sum];
}

int main() {
    int n, sum;
    cin >> n >> sum;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << countSubsets(arr, sum) << endl;

    return 0;
}
