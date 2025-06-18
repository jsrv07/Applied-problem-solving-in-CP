#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long left=*max_element(weights.begin(),weights.end()),right=0,a,p,q,size=weights.size();
        for (auto c:weights){right+=c;}
        long long mid=(left+right)/2;
        while (left < right){
            a=0;
            p=weights[0];
            for(int i=1;i<size;i++){
                if(p+weights[i]<=mid){p+=weights[i];}
                else {a+=1;p=weights[i];}
            }
            a+=1;
            if(a>days){left=mid+1;}
            else {right=mid;}
            mid=(left+right)/2;
        }
        return mid;
    }
};