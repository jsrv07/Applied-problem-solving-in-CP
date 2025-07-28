#include <iostream>
#include <vector>
using namespace std;

int change(int amount, vector<int>& coins) {
    vector<int> dp(amount + 1, 0);
    dp[0] =1;
    for (int coin : coins) {
        for (int i = coin; i <= amount; ++i) {
            dp[i] +=dp[i - coin];
        }
    }
    return dp[amount];
}

int main() {
    int n, amount;
    cin >>n;
    vector<int> coins(n);
    for (int i=0;i<n;++i) {
        cin>>coins[i];
    }
    cin>>amount;
    int result=change(amount, coins);
    cout<<result;
}