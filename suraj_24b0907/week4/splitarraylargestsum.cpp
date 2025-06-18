#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        long long left,right,mid,a,p,q,size=nums.size();
        left=*max_element(nums.begin(),nums.end());
        right=0;
        for (auto c:nums){right+=c;}
        if(k==1){return right;}
        mid=(left+right)/2;
        while(left<right){
            a=0;
            p=nums[0];
            for(int i=1;i<size;i++){
                if(p+nums[i]<=mid){p+=nums[i];}
                else {a+=1;p=nums[i];}
            }
            a+=1;
            if(a>k){left=mid+1;}
            else {right=mid;}
            mid=(left+right)/2;
        }
        return mid;

    }
};