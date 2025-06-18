#include<bits/stdc++.h>
using namespace std;

int minElement(vector<int> A) {
    int l = 0, r = A.size()-1;
    while(l<r){
        int m = (r+l)/2;
        if(A[l] < A[r]) {
            return A[l];
        }
        if(A[m] <= A[r]){
            r = m;
        }
        else {
            l = m+1;
        }
    }
    return A[l];
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i(0); i<n; i++){
        cin >> A[i];
    }
    cout << minElement(A);
}