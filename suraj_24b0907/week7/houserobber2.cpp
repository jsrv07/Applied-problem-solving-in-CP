#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int> p;
        for(int i=1;i<nums.size();i++){
            p.push_back(nums[i]);
        }
        nums.pop_back();
        return max(robs(p),robs(nums));
    }
    int robs(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> v={nums[0],max(nums[0],nums[1])};
        for(int i=2;i<n;i++){
            v.push_back(max(v[i-2]+nums[i],v[i-1]));
        }
        return v[n-1];}
};