class Solution {
public:
bool calTime(vector<int> &nums,int mid,int k){
    int sum=0,cnt=0;
    for(int &it:nums){
        sum+=it;
        if(sum>mid) {sum=it; cnt++;}
    }
    if (sum>0) cnt++;
    return (cnt>k);
}
    int splitArray(vector<int>& nums, int k) {
        if(k>nums.size()) return -1;
    long int low=*max_element(nums.begin(),nums.end()),high,mid;
    high=0;
    for(auto &i:nums)
    high+=i;
    while(low<high){
        mid=(high+low)/2;
        if(calTime(nums,mid,k)) low=mid+1;
        else high=mid;
    }
    return low;
    }
};