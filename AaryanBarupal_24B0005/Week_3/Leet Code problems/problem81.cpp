class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target) return true;
            if(nums[mid]==nums[l] && nums[mid]==nums[r]){
                l++;
                r--;
            }
            else if(nums[l]<=nums[mid]){
                if(nums[l]<=target && target<nums[mid]) r=mid-1;
                else l=mid+1;
            }
            else{
                if(nums[l]>nums[mid]){
                    if(target<=nums[r] && target>nums[mid]) l=mid+1;
                    else r=mid-1;
                }
            }
        }
        return false;
    }
};
