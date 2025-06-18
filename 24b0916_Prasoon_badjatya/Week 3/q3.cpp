#include<bits/stdc++.h>
using namespace std;


int search(vector<int>& nums, int target) {
    int l = 0, r = nums.size()-1;
    while(l<=r){
        int m = l+(r-l)/2;
        if(nums[m] == target) return m;
        if(nums[m] >= nums[l]) {
            if(nums[m] >= target && nums[l] <= target) {
                r = m-1;
            }
            else l = m+1;
        }
        else{
            if(nums[m] <= target && nums[r] >= target) {
                l = m+1;
            } 
            else r = m-1;
        }
    }
    return -1;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i(0); i<n; i++){
        cin >> A[i];
    }
    cout << search(A, k);
}