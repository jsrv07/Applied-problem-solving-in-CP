#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        vector <int> LIS;
        LIS.push_back(nums[0]);
        int length=1;

        for(int i=1;i<nums.size();i++){
            if(nums[i]>LIS.back()){
                LIS.push_back(nums[i]);
                length++;
            }
            else{
                int idx=lower_bound(LIS.begin(),LIS.end(),nums[i])-LIS.begin();
                LIS[idx]=nums[i];
            }
        }
        return length;
    }
};