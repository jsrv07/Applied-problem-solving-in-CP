#include<bits/stdc++.h>
using namespace std;

int findNthroot(int m, int n){
    if(n == 1) return m;
    int l = 0, r = m;
    while(l<=r){
        int mid = (l+r)/2;
        int k = pow(mid,n);
        if(k == m) return mid;
        else if(k < m) l = mid+1;
        else r = mid-1;
    }
    return -1;
}

int main(){
    int m, n;
    cin >> m >> n;
    cout << findNthroot(m, n) ;
}