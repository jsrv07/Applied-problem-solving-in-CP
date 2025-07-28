
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countSubsetsWithSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<vector<int>> dp(n+1,vector<int>(target + 1, 0));
        for (int i=0;i<=n;++i) {
            dp[i][0]=1;
        }
        for (int i=1;i<=n;++i) {
            for (int sum=0;sum<=target;++sum) {
                dp[i][sum]=dp[i-1][sum];
                if(sum>=arr[i-1]){
                    dp[i][sum]+=dp[i-1][sum-arr[i-1]];
                }
            }
        }
        return dp[n][target];
    }
};
int main() {
    int n, target;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;++i) {
        cin >>arr[i];
    }
    cin >> target;
    Solution sol;
    int count=sol.countSubsetsWithSum(arr,target);
    cout<<count;
}
