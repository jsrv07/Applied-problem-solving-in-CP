#define ll long long
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<unsigned ll> dp(amount+1,0);
        dp[0]=1;
        for(ll i=0;i<coins.size();i++){
            for(ll j=coins[i];j<=amount;j++){
                dp[j]=dp[j]+dp[j-coins[i]];
            }
        }
        return dp[amount];
    }
};