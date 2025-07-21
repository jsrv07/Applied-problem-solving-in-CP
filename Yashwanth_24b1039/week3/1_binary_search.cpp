#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int low=0,high=arr.size()-1;
        int mid;
        int res=-1;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==k){
                res=mid;
                high=mid-1;
            }
            else if(arr[mid]>k) high=mid-1;
            else low=mid+1;
        }
        return res;
    }
};