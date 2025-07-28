#include <bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2, int i, int j){
    int n = s1.length();
    int m = s2.length();
    vector<int> prev(m+1, 0);
    vector<int> curr(m+1, 0);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1])
                curr[j] = 1 + prev[j - 1];
            else
                curr[j] = max(prev[j], curr[j - 1]);
        }
        prev = curr;
    }
    return curr[m];
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    cout << LCS(s1, s2, 0, 0);
} 