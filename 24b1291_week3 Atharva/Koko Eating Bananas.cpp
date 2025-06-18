class Solution {
public:
    long int funct( vector<int>& piles, int h, int mid){
        long int th=0;
        for(int j=0; j<piles.size(); j++){
            long int ceil= (piles[j] + mid-1)/mid; // finding ceil
            th+= ceil;
        }
        return th;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int mxm=INT_MIN;
        for(int i=0; i<piles.size(); i++){
            if(piles[i]>mxm){
                mxm=piles[i];
            }
        }
        long low=1, high=mxm;
        while(low<=high){
            long int mid= low+(high-low)/2;
            long int a=funct(piles,h,mid);
            if(a<=h){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};