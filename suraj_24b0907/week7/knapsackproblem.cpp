#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        vector<vector<int>> v(n+1,vector<int>(W+1,0));
        for (int i=1;i<=n;i+=1) {
            for (int w=0;w<=W;w+=1) {
                if (wt[i-1]<=w) {
                    v[i][w]=max(val[i-1]+v[i-1][w-wt[i-1]],v[i-1][w]);}
                else {
                    v[i][w]=v[i-1][w];}}}
        return v[n][W];
    }
};
