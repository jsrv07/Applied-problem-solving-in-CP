#include <bits/stdc++.h>
using namespace std;


// i was not able to solve this question by myself with binary seacrch as i didn't find the condtion 
// when we will update the low and high

// we are using the fact that in any part like right or left 
// whenever there will be a ans that will make that side odd numbered


int singleNonDuplicate(vector<int>& nums) {
        
        int l = 0;
        int r = nums.size()-1;

        while( l <  r){
            int mid = l + (r-l)/2;
            bool isEvenlength = (mid - l)% 2 ==0;
            
            if(nums[mid] == nums[mid+1]){
                if(isEvenlength){
                    l = mid +2;
                }
                else{
                    r = mid-1;
                }
            }
            else if( nums[mid] == nums[mid-1]){

                 if(isEvenlength){
                    r = mid  - 2;
                }
                else{
                    l = mid + 1;
                }
            }
            else{
                return nums[mid];
            }
        }
        // It will exit the loop at l >= r so we return l
        return nums[l];

       
}