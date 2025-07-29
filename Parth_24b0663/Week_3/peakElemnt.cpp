class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size(),l=0,h=n-1,mid,k=n;
    if(n==1 || nums[0]>nums[1]) return 0;
    if(nums[n-1]>nums[n-2]) return n-1;
    l=1,h=n-2;
    while(h>=l){
        mid=(h+l)/2;
        if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]) return mid;
        if(nums[mid]<nums[mid-1]) h=mid;
        else if(nums[mid]<nums[mid+1]) l=mid+1;
        else l=mid+1;
    }
    return mid;
    }
};