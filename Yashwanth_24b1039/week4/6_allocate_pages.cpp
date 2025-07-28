#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    bool can_distribute(vector<int>& arr,int k,int max){
        
        int cnt=1;
        int curr_sum=0;
        for(int i=0;i<arr.size();i++){
            
            if(curr_sum+arr[i]>max){
                cnt++;
                curr_sum=arr[i];
            }
            else{
                curr_sum+=arr[i];
            }
        }
        
        return k>=cnt;
    }
    
    int findPages(vector<int> &arr, int k) {
        
        if(k>arr.size()) return -1;
        
        int res=0;
        int low=*max_element(arr.begin(),arr.end()),high=accumulate(arr.begin(),arr.end(),0);
        int mid;
        
        while(low<=high){
            
            mid=(low+high)/2;
            if (can_distribute(arr,k,mid)){
                high=mid-1;
                res=mid;
            }
            else{
                low=mid+1;
            }
        }
        return res;
        
    }
};