class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long n=weights.size(),mid,l=*max_element(weights.begin(),weights.end());
        int h=0;
        for(auto & it:weights){
            h+=it;
        }
        while(h>l){
            mid=(h+l)/2;
            int day=0,sum=0;
            for(auto &it:weights){
                sum+=it;
                if(sum>mid) {day++;sum=it;}
                if(sum==mid){day++;sum=0;}
            }
            if(sum>0) day++;
            if(day>days) l=mid+1;
            else h=mid; 
        }
        return l;
    }
};