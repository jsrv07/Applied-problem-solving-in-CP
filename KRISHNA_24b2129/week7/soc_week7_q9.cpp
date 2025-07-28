#include <iostream>
#include <vector>
using namespace std;
int knapsack(int n, int W, vector<int>& weight, vector<int>& value) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for(int i = 1; i <= n; i++) {
        for(int w = 0; w <= W; w++) {
            if(weight[i - 1] <= w) {
                dp[i][w] = max(value[i - 1] + dp[i - 1][w - weight[i - 1]],
                               dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][W];
}
int main() {
    int n,W;
    cin>>n>>W;
    vector<int> weight(n);
    vector<int> value(n);
    for(int i=0;i<n;i++){
        cin>>weight[i];
        cin>>value[i];
    }
    cout<< knapsack(n, W, weight, value);
}