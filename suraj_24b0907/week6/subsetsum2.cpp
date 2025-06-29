#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
  vector<vector<int>> b;
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        vector<int> t;
        sort(nums.begin(),nums.end());
        ss(0,nums,t,b);
        return b;
    }    
    void ss(int s, vector<int>& nums, vector<int>& t, vector<vector<int>>& result) {
        result.push_back(t);
        for (int i = s; i < nums.size(); ++i) {
            if (i>s && nums[i] == nums[i-1]) {continue;}
            t.push_back(nums[i]);
            ss(i+1,nums,t,result);
            t.pop_back();}}
};
