#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int lcs(string &s1, string &s2) {
        int m = s1.size();
        int n = s2.size();
        vector<vector<int>> v(m+1,vector<int>(n+1,0));

        for (int i=1;i<=m;i+=1){
            for (int j=1;j<=n;j+=1){
                if (s1[i-1]==s2[j-1]){
                    v[i][j]=1+v[i-1][j-1];}
                else {
                    v[i][j] = max(v[i-1][j],v[i][j-1]);}}}
        return v[m][n];
    }
};
