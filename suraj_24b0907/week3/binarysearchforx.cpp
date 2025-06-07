#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int left,right,mid;
        left=0;
        right=arr.size()-1;
        mid=(left+right)/2;
        while(left<right){
            if(arr[mid]<k){left=mid+1;}
            else{right=mid;}
            mid=(left+right)/2;
        }
        (arr[mid]==k)? mid=mid : mid=-1;
        return mid;
    }
};