class Solution {
public:
    bool chk(vector<int> & a , int t,int m){
        long sum=0;
        for(auto &it:a){
            sum+=it/m;
            if(it%m) sum++; 
        }
        return (sum>t);
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        long n=nums.size(),mid,l=1;
        int h=INT_MIN;
        for(auto &it:nums)
        h=max(h,it);
        while(h>l){
            mid=(h+l)/2;
            if(chk(nums,threshold,mid)) l=mid+1;
            else h=mid; 
        }
        return l;
        
    }
};