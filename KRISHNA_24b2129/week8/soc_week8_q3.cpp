#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount+1,INT_MAX);
    dp[0] =0;
    for (int coin :coins) {
        for (int j =coin;j<=amount;++j) {
            if (dp[j -coin]!=INT_MAX) {
                dp[j] =min(dp[j],dp[j - coin] + 1);
            }
        }
    }
    return dp[amount] == INT_MAX ? -1:dp[amount];
}

int main() {
    int n, amount;
    cin >> n;
    vector<int> coins(n);
    for(int i=0;i<n;++i) {
        cin>>coins[i];
    }
    cin>>amount;

    int result=coinChange(coins,amount);
    return result;
}