#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isMatch(string s, string p) {
    int n = p.size(), m = s.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));

    dp[0][0] = true;

    // Initialize first column (pattern vs empty string)
    for (int i = 1; i <= n; ++i) {
        if (p[i - 1] == '*')
            dp[i][0] = dp[i - 1][0];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (p[i - 1] == s[j - 1] || p[i - 1] == '?') {
                dp[i][j] = dp[i - 1][j - 1];
            } else if (p[i - 1] == '*') {
                dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
            } else {
                dp[i][j] = false;
            }
        }
    }

    return dp[n][m];
}

int main() {
    string s, p;
    cin >> s >> p;

    cout << (isMatch(s, p) ? "true" : "false") << endl;

    return 0;
}
