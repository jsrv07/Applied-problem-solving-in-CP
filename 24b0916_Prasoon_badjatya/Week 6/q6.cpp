#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(vector<int> arr, int sum){
    int n = arr.size();
    vector<vector<bool>> dp(n+1, vector<bool>(sum+1, false));

    for(int i(0); i<=n; i++){
        dp[i][0] = true;
    }

    for(int i(1); i<=n; i++){
        for(int temp = 1; temp <= sum; temp++){
            if(arr[i-1]<=temp){
                dp[i][sum] = dp[i-1][temp] || dp[i][temp-arr[i-1]];
            }
            else{
                dp[i][sum] = dp[i-1][sum];
            }
        }
    }
    return dp[n][sum];
}

int main(){
    int n, sum;
    cin >> n >> sum;
    vector<int> arr(n);
    for(int i(0); i<n; i++){
        cin >> arr[i];
    }
    cout << isSubsequence(arr, sum);
}