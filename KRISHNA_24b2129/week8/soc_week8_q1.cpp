#include <bits/stdc++.h>
using namespace std;

int findTargetSumWays(vector<int>& nums,int target) {
    int sum =accumulate(nums.begin(),nums.end(), 0);
    if((sum+target)%2!=0 || abs(target)>sum) {
        return 0;
    }

    int subsetSum=(sum+target)/2;
    int n=nums.size();
    vector<int> dp(subsetSum + 1, 0);
    dp[0] =1; 
    for (int num:nums) {
        for (int j=subsetSum;j>=num;--j) {
            dp[j] +=dp[j-num];
        }
    }
    return dp[subsetSum];
}
int main() {
    vector<int> nums;
    int n,target;
    cin>>n;
    for (int i= 0; i < n; ++i) {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cin >> target;
    int result=findTargetSumWays(nums,target);
    cout<<result;
    return 0;
}