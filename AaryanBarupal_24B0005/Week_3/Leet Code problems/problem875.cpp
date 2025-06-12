class Solution {
public:
    bool eat_or_not(vector<int>& piles,int h,int k){
        int time=0;
        for(int bananas: piles){
            time+=(bananas+k-1)/k;
        }
        return time<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*(max_element(piles.begin(),piles.end()));
        while(l<r){
            int mid=l+(r-l)/2;
            if(eat_or_not(piles,h,mid)) r=mid;
            else l=mid+1;
        }
        return l;
    }
};