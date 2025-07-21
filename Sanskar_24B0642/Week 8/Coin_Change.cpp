#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    const int INF = 1e9;
    vector<int> dp(amount + 1, INF);
    dp[0] = 0;

    for (int coin : coins) {
        for (int i = coin; i <= amount; ++i) {
            dp[i] = min(dp[i], dp[i - coin] + 1);
        }
    }

    return dp[amount] == INF ? -1 : dp[amount];
}

int main() {
    int n, amount;
    cin >> n >> amount;

    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }

    cout << coinChange(coins, amount) << endl;

    return 0;
}
