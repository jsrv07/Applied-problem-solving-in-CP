#include <bits/stdc++.h>
using namespace std;

class Solution {
  
    void generate_powerset(vector<int>& nums,vector<int>& subset,int idx,vector<vector<int>>& res){
        if(idx==nums.size()){
            vector<int> temp=subset;
            sort(temp.begin(),temp.end());
            res.push_back(temp);
            return;
        }
        generate_powerset(nums,subset,idx+1,res);
        subset.push_back(nums[idx]);
        generate_powerset(nums,subset,idx+1,res);
        subset.pop_back();
        return;
    }
    
    
  public:
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
    
        vector<int> subset;
        vector<vector<int>> res;
        generate_powerset(nums,subset,0,res);
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(),res.end()),res.end());
        return res;
    }
};
