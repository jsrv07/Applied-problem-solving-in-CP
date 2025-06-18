#include<bits/stdc++.h>
using namespace std;


int bs(vector<int> A, int target, int l, int r) {
    if (l > r) return -1;
    int m = l+(r-l)/2;
    if(A[m]<target) return bs(A, target, m+1, r);
    else if(A[m]>target) return bs(A, target, l, m-1);
    else return m;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i(0); i<n; i++){
        cin >> A[i];
    }
    cout << bs(A, k, 0, n-1);
}