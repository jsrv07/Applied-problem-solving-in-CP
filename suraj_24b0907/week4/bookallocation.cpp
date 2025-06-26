#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        long long left,right,mid,size=arr.size(),a,p,q;
        if(k>size){return -1;}
        left=*max_element(arr.begin(),arr.end());
        if(k==size){return left;}
        right = 0;
        for(auto c: arr){right+=c;}
        mid=(left+right)/2;
        while(left<right){
            a=0;
            p=arr[0];
            for(int i=1;i<size;i++){
                if(p+arr[i] <= mid){p+=arr[i];}
                else {a+=1;p=arr[i];}
            }
            a+=1;
            if(a>k){left=mid+1;}
            else if (a<k) {right=mid;}
            else {right=mid;}
            mid=(left+right)/2;
        }
        return mid;
    }
};