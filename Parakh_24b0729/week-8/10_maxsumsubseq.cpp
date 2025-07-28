class Solution {
public:
    int maxSumIS(vector<int>& arr) {
        int n = arr.size();
        vector<int> dp = arr; // Initialize with arr[i] itself

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (arr[j] < arr[i]) {
                    dp[i] = max(dp[i], dp[j] + arr[i]);
                }
            }
        }

        return *max_element(dp.begin(), dp.end());
    }
};
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    system("pause");
    return 0;
}