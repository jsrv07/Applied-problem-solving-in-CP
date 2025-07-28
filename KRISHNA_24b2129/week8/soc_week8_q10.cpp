#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSumIncreasingSubsequence(vector<int>& arr) {
        int n=arr.size();
        if (n==0) return 0;
        vector<int> dp=arr;
        int maxSum=arr[0];
        for (int i=1;i<n;++i) {
            for (int j=0;j<i;++j) {
                if (arr[j]<arr[i]) {
                    dp[i] =max(dp[i],dp[j] +arr[i]);
                }
            }
            maxSum =max(maxSum, dp[i]);
        }
        return maxSum;
    }
};

int main() {
    Solution sol;
    int n;
    cin >>n;
    vector<int> arr(n);
    for (int i=0;i<n;++i) {
        cin>>arr[i];
    }
    int result = sol.maxSumIncreasingSubsequence(arr);
    cout<<result;
}