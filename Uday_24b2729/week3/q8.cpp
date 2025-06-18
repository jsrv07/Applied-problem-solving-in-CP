#include <bits/stdc++.h>
using namespace std;
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size()-1;
        int l = 0;
        int r = n;
        while(l < r){

            int mid = l + (r-l)/2;

            if(nums[mid+1] > nums[mid]){
                l = mid+1;  
            }
            else{
                // This may be the answer that's why we are not saying mid -1
                r = mid;
            }
            
        }
        return l;
    }