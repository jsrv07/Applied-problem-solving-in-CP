#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        
        int n=arr.size();
        if(arr[0]<arr[n-1]) return 0;
        int low=0,high=n-1;
        int mid=(low+high)/2;
        int res=0;
        while(low<=high){
            
            mid=(low+high)/2;
            if(arr[mid]<arr[0]){
                res=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return res;
        
    }
};
