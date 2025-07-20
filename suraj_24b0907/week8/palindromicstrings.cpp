#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length(),count = 0;
        for (int c=0;c<2*n-1;++c) {
            int l=c/2;
            int r=l+c%2;
            while (l>=0 && r<n && s[l]==s[r]){
                count++;
                l--;
                r++;}}
        return count;
    }
};
