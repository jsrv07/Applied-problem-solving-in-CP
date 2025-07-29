class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size(),h=n-1,l=0,mid,k=n;
        if(n==0) return -1;
        if(n==1){
            if(nums[0]==target) return 0;
            else return -1;
        }
        while(h-l>0){
            mid=(h+l)/2;
            if (nums[mid]>nums[0] || nums[mid]==nums[0]) l=mid+1;
            else h=mid;
        }
        if(nums[l]<nums[0]) {k=l;}
        if(target<nums[0]) {l=k;h=n-1;}
        else {l=0;h=k-1;}
        while(l<=h){
            mid=(h+l)/2;
            if(nums[mid]==target) return mid;
            else if (nums[mid]<target) l=mid+1;
            else h=mid-1;
        }
        return -1;
    }
};