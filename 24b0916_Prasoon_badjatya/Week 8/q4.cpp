#include <bits/stdc++.h>
using namespace std;

    int change(int amount, vector<int>& coins) {
        bool allEven = all_of(coins.begin(), coins.end(), [](int c) { return c % 2 == 0; });
        if (amount % 2 == 1 && allEven) return 0;

        vector<int> dp(amount + 1, 0);
        dp[0] = 1;

        for (int coin : coins) {
            for (int i = coin; i <= amount; ++i) {
                dp[i] += dp[i - coin];
            }
        }

        return dp[amount];
    }


int main(){
    int n, amount;
    cin >> n >> amount;
    vector<int> coins;
    for(int i(0); i<n; i++){
        cin >> coins[i];
    }
    cout << change(amount, coins);
}   