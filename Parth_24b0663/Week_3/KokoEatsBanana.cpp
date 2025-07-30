class Solution {
public:
long int calTime(vector<int> &nums,int mid){
    long int time=0;
    for(auto &it:nums){
        time+=it/mid;
        if (it%mid) time++;
    }
    return time;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=0;
        long int mid;
    for(auto &it:piles)
    high=max(high,it);
    while(high>=low){
        mid=(high + low)/2;
        if(calTime(piles,mid)<=h) high=mid-1;
        else low=mid+1;
    }
return low;
    }
};