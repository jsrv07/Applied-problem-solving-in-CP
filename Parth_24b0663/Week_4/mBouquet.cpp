class Solution {
public:
    bool chk(vector<int> &a, int m,int k,long mid){
        int adjFlwPr=0;
        int cnt=0;
        for(auto &it:a){
            if(it-mid<=0) {cnt++;}
            else {cnt=0;}
            if(cnt==k){adjFlwPr++;cnt=0;}
        }
        return (adjFlwPr<m);
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long n=bloomDay.size(),mid,l=0;
        int h=INT_MIN;
        if(n<(long)m*k) return -1;
        for(auto &it:bloomDay)
        h=max(h,it);
        while(h>l){
            mid=(h+l)/2;
            if(chk(bloomDay,m,k,mid)) l=mid+1;
            else h=mid; 
        }
        return l;
    }
};