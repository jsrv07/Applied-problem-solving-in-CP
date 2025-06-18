#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i,j,c,a=arr.size();
        i=1;j=0,c=0;
        while(j<a){
           if(i!=arr[j]){c+=1;i+=1;}
           else {i+=1;j+=1;} 
           if(c==k){return i-1;}
        }
        return (i-1+k-c);
    }
};