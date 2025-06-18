#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int a=0,b,left,right,mid;
        for (auto c:nums){a+=c;}
        if(nums.size()==threshold){return *max_element(nums.begin(),nums.end());}
        left=a/threshold;
        right=(a/(threshold-nums.size()))+1;
        a=0;
        for(auto c:nums){a+=ceil(double(c)/right);}
        mid=(left+right)/2;
        if(a<=threshold){
            while(left < right){
                a=0;
                for(auto c:nums){a+=ceil(double(c)/mid);}
                if(a>threshold){left=mid+1;}
                else if(a<threshold){right=mid;}
                else {right = mid;}
            }
            return mid;
        }
        
    }
};      