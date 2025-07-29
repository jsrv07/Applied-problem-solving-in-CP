class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(),l=0,h=n-1,mid;
        if(nums[l]>nums[h]){
            while(h>l){
                mid=(h+l)/2;
                if(nums[mid]>nums[0] || nums[mid]==nums[0]) l=mid+1;
                else h=mid;
            }
        }
        return nums[l];
    }
};