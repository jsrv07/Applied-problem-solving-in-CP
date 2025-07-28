#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
        int m=s.length(),n=p.length();
        vector<vector<bool>> v(m + 1, vector<bool>(n + 1, false));
        v[0][0] = true;
        for (int j=1;j<=n;++j) {
            if (p[j-1]=='*') {
                v[0][j]=v[0][j-1];}}
        for (int i=1;i<=m;++i) {
            for (int j=1;j<=n;++j) {
                if (p[j-1]==s[i-1] || p[j-1]=='?'){
                    v[i][j]=v[i-1][j-1];}
                else if (p[j-1]=='*') {
                    v[i][j]=v[i][j-1] || v[i-1][j];}}}
        return v[m][n];
    }
};
