#include <bits/stdc++.h>
using namespace std;

    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, amount+1);
        dp[0] = 0;
        for(int i(1); i<=amount; i++){
            for(int j(0); j<coins.size(); j++){
                if(i-coins[j]>=0) dp[i] = min(1+dp[i-coins[j]], dp[i]);
            }
        }
        return dp[amount] != amount+1 ? dp[amount] : -1;
    }


int main(){
    int n, amount;
    cin >> n >> amount;
    vector<int> coins;
    for(int i(0); i<n; i++){
        cin >> coins[i];
    }
    cout << coinChange(coins, amount);
}   