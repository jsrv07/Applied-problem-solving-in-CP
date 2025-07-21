#include <bits/stdc++.h>
using namespace std;

    int countNumbersWithUniqueDigits(int n) {
        vector<int> dp(9);
        dp[0]=1;
        dp[1]=10;
        for(int i(2); i<9; i++){
            dp[i] = helper(i);
        }
        int ans = 0;
        for(int i(1); i<n+1; i++){
            ans+=dp[i];
        }
        return (ans == 0 ? dp[0]:ans);
    }
    int helper(int n){
        int ans = 9;
        for(int i(0); i<n-1; i++){
            ans*=(9-i);
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    cout << countNumbersWithUniqueDigits(n);
}  