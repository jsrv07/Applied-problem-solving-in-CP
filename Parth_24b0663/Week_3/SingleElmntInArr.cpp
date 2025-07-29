class Solution {
public:
bool shftl(vector <int> &nums,int mid){
    if(mid%2==0 && nums[mid]==nums[mid+1]) return true;
    else if(mid%2==1 && nums[mid]==nums[mid-1]) return true;
    return false;
}
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size(),l=0,h=n-1,mid,k=n;
    while(h>l){
        mid=(h+l)/2;
        if(shftl(nums,mid)) l=mid+1;
        else h=mid; 
    }
    return nums[l];
    }
};