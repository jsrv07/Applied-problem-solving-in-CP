class Solution {
public:
    bool subsetUtil(int i, int sum, vector<int>& arr, vector<vector<int>>& dp) {
        if (sum == 0) return true;
        if (i == 0) return arr[0] == sum;

        if (dp[i][sum] != -1) return dp[i][sum];

        bool notTake = subsetUtil(i - 1, sum, arr, dp);
        bool take = false;
        if (arr[i] <= sum)
            take = subsetUtil(i - 1, sum - arr[i], arr, dp);

        return dp[i][sum] = take || notTake;
    }

    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
        return subsetUtil(n - 1, sum, arr, dp);
    }
};
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    system("pause");
    return 0;
}