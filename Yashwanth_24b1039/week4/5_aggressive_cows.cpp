#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    bool can_place(vector<int>& stalls,int k,int d){
        
        int cnt=1;
        int x=stalls[0];
        for(int i=1;i<stalls.size();i++){
            
            if(stalls[i]-x>=d){
                cnt++;
                x=stalls[i];
            }
        }
        
        return cnt>=k;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        
        sort(stalls.begin(),stalls.end());
        int res=0;
        
        int low=1,high=stalls.back()-stalls[0];
        int mid;
        
        while(low<=high){
            
            mid=(low+high)/2;
            
            if(can_place(stalls,k,mid)){
                low=mid+1;
                res=mid;
            }
            else{
                high=mid-1;
            }
        }
        return res;
    }
};