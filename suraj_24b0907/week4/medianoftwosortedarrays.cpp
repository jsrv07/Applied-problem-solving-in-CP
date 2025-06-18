#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        long long a,p=0,q=0,tot,val,idx,c=0,d=0,x,y;
        bool t=false;
        a=nums1.size()+nums2.size();
        x=nums1.size();
        y=nums2.size();
        while(true){
            if(p==x){c=d;d=nums2[q];q+=1;tot+=1;}
            else if(q==y){c=d;d=nums1[p];p+=1;tot+=1;}
            else if(nums1[p]>=nums2[q]){c=d;d=nums2[q];q+=1;tot+=1;}
            else{c=d;d=nums1[p];p+=1;tot+=1;}
            if(t){return (c+d)/2.0;}
            if(tot==(a+1)/2){
                if(a%2==1){return c;}
                else {t=true;}
            }
        }
    }
};