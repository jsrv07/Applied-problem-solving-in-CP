#include <bits/stdc++.h>
using namespace std;

int countWays(int n, int sum){
    vector<vector<int>> dp(n+1, vector<int> (sum+1, 0));
    for(int d = 1; d <= 9 && d <= sum; d++) {
        dp[1][d] = 1;
    }

    for(int i(2); i<=n; i++){
        for(int j(0); j<=sum; j++){
            for(int k = 0; k <= 9; k++) {
                if(j >= k) dp[i][j] += dp[i-1][j-k];
            }
        }
    }
    return dp[n][sum];
}

int main(){
    int n, sum;
    cin >> n >> sum;
    cout << countWays(n, sum);
}