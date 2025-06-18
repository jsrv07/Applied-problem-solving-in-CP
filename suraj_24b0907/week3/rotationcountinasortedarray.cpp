#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int t=arr.size();
        if(t==1){return 0;}
        if(arr[0]<arr[t-1]){return 0;}
        int left,right,mid;
        left=0;right=t-1;
        mid=(left+right)/2;
        while(left<=right){
            if(arr[mid]>arr[mid+1]){return mid+1;}
            if(arr[mid-1]>arr[mid]){return mid;}
            else if(arr[0]<arr[mid]){left=mid+1;}
            else {right=mid-1;}
            mid=(left+right)/2;
        }
        return 0;
    }
};
