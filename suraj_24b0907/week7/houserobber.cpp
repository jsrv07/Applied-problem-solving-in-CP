#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> v={nums[0],max(nums[0],nums[1])};
        for(int i=2;i<n;i++){
            v.push_back(max(v[i-2]+nums[i],v[i-1]));
        }
        return v[n-1];
    }
};