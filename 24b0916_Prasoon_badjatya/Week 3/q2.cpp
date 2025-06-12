#include<bits/stdc++.h>
using namespace std;

int lb(vector<int> A, int target){
    int l = 0, r = A.size()-1;
    int res = A.size();
    while(l<=r){
        int m = l +(r-l)/2;
        if(A[m] >= target){
            res = m;
            r = m-1;
        }
        else l = m+1;
    }
    return res;
}
int rb(vector<int> A, int target){
    int l = 0, r = A.size()-1;
    int res = A.size();
    while(l<=r){
        int m = l + (r-l)/2;
        if(A[m] > target){
            res = m;
            r = m-1;
        }
        else l = m+1;
    }
    return res;
}
int bs(vector<int> A, int target) {
    int l = lb(A, target);
    int r = rb(A, target);
    return r-l;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i(0); i<n; i++){
        cin >> A[i];
    }
    cout << bs(A, k);
}