#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int l = 0, r = nums.size()-1;
    if(r == 0) return nums[0];
    if(nums[0] != nums[1]) return nums[0];
    if(nums[r] != nums[r-1]) return nums[r];
    l++;
    r--;
    while(l<r){
        int m = (l+r)/2;
        if(nums[m]!=nums[m+1] && nums[m]!=nums[m-1]) return nums[m];
        else if(nums[m] == nums[m-1]) {
            if(m%2 == 0) r = m;
            else l = m+1;
        }
        else {
            if(m%2 == 0) l = m+1;
            else r = m;
        } 
    }
    return nums[l];
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i(0); i<n; i++){
        cin >> A[i];
    }
    cout << singleNonDuplicate(A);
}