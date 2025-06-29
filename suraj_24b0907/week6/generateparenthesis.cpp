#include <bits/stdc++.h>
using namespace std;
class Solution {
public:        
    vector<string> v;
    vector<string> generateParenthesis(int n) {
        int p=st(0,0,"",n);
        return v;
    }
    int st(int l,int r,string s,int n){
            int k;
            if(l==n){
                if(r==n){v.push_back(s);}
                else {k=st(l,r+1,s+")",n);}
                return 0;
            }
            if(l>r){k=st(l+1,r,s+"(",n)+st(l,r+1,s+")",n);}
            else {k=st(l+1,r,s+"(",n);}
            return 0;
        };
};