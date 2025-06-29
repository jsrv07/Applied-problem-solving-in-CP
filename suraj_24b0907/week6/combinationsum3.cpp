#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<vector<int>> b;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> h;
        int l=ss(k,n,0,0,h);
        return b;
    }
    int ss(int k,int n,int a,int c,vector<int> v){
        int p;
        if(k==1){
            if(n-c>a && n-c<=9){v.push_back(n-c);b.push_back(v);}return 0;
        }
        if(c>=n || a==9){return 0;}
        for(int i=a+1;i<9;i++){
            v.push_back(i);
            p=ss(k-1,n,i,c+i,v);
            v.pop_back();
        }
        return 0;
    }
};