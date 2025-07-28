#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int countNumbersWithSum(int n, int k) {
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    // Base case: 1-digit numbers (1-9)
    for (int d = 1; d <= 9 && d <= k; ++d) {
        dp[1][d] = 1;
    }

    // Build up DP table
    for (int i = 2; i <= n; ++i) {
        for (int sum = 0; sum <= k; ++sum) {
            for (int d = 0; d <= 9; ++d) {
                if (sum >= d) {
                    dp[i][sum] = (dp[i][sum] + dp[i - 1][sum - d]) % MOD;
                }
            }
        }
    }

    return dp[n][k];
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << countNumbersWithSum(n, k) << endl;

    return 0;
}
