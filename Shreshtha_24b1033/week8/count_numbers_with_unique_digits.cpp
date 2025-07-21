class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        vector<int> dp(n+1,0);
        dp[0]=1;
        dp[1]=10;
        vector<int> help(n+1,0);
        help[1]=9;
        int p=9;
        for(int i=2;i<=n && i<=10;i++){
            help[i]=help[i-1]*p;
            p--;
        }
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+help[i];
        }
        return dp[n];
    }
};
