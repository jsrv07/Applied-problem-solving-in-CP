#include <bits/stdc++.h>
using namespace std;class Solution {
public:
    string longestPalindrome(string s) {
        const int n=s.length();
        int max;
        vector<vector<int>> arr(n, vector<int>(n, 0));
        for(int i=0;i<n;i++){arr[i][i]=1;max=1;}
        for(int i=0;i<n-1;i++){if(s[i]==s[i+1]){arr[i][i+1]=1;max=2;}}
        for(int i=0;i<n-2;i++){if(s[i]==s[i+2]){arr[i][i+2]=1;max=3;}}
        for(int i=3;i<n;i++){
            for(int j=0;j<n-i;j++){
                if(s[j]==s[j+i] && arr[j+1][j+i-1]==1){arr[j][j+i]=1;max=i+1;}
            }
        }
        for(int i=0;i<=n-max;i++){
            if(arr[i][i+max-1]==1){return s.substr(i,max);}
        }
        return s;
    }
};