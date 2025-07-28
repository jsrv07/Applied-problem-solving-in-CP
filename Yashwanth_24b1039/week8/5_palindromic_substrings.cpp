#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {

        int n=s.size();
        int res=0;
        int st;
        int mx;
        for(int i=0;i<=2*(n-1);i++){

            st=(i+1)/2;
            mx=min((i+2)/2,n+1-i%2-(i+2)/2);
            for(int j=st;j<st+mx;j++){
                if(s[j]==s[i-j]) res++;
                else break;
            }
        }
        return res;
    }
};