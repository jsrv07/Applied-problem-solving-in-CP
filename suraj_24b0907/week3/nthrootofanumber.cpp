#include <bits/stdc++.h>
using namespace std;
int nthRoot(int n, int m) {
    // code here
    int left=1,right=m,mid;
    mid=(left+right)/2;
    long long val;
    while(left<=right){
        val=1;
        for(int i=0;i<n;i++){val*=mid;}
        if(val < m){left=mid+1;}
        else if (val > m){right=mid-1;}
        else {return mid;}
        mid=(left+right)/2;
    }
    return -1;
}