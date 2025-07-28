#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> b;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        int p=ss(target,0,v,candidates,0,candidates.size());
        return b;
    }
    int ss(int t,int c,vector<int> v,vector<int>& candidates,int i,int s){
        if(c==t){b.push_back(v);return 0;}
        if(c>t){return 0;}
        int p;
        for(int j=i;j<s;j++){
            v.push_back(candidates[j]);
            p=ss(t,c+candidates[j],v,candidates,j,s);
            v.pop_back();
        }
        return 0;
    }
};