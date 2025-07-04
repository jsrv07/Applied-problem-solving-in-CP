#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> v;
        for(int i:nums){
            auto it=lower_bound(v.begin(),v.end(),i);
            if(it==v.end()) v.push_back(i);
            else *it=i;
        }
        return v.size();
    }
};