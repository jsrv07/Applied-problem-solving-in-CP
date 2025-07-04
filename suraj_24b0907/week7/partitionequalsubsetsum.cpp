#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int t=0;
        for(auto i:nums) t+=i;
        if(t%2==1) return false;
        t=t/2;
        vector<bool> v(t+1,false);
        v[0]=true;
        for(auto i:nums){
            for(int j=t;j>=i;j-=1){
                v[j]=v[j] || v[j-i];
            }
        }
        return v[t];
    }
};