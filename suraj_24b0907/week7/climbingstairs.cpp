#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> v={0,1,2,3};
    int climbStairs(int n) {
        if(n<v.size()) return v[n];
        while(v.size()<=n){
            v.push_back(v[v.size() - 1] + v[v.size() - 2]);
        }
        return v[n];
    }
};