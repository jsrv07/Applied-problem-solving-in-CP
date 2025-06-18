#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int left,right,mid;
        left=0;
        right=arr.size()-1;
        mid=(left+right)/2;
        while(left<right){
            if(arr[mid]<target){left=mid+1;}
            else{right=mid;}
            mid=(left+right)/2;
        }
        if(arr[mid]!=target){return 0;}
        int count=0;
        while(arr[mid]==target){
            mid+=1;
            count+=1;
        }
        return count;
    }
};
