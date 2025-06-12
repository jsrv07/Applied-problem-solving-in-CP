#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int l = 0, r = nums.size()-1;
    if(r == 0) return 0;
    if(nums[0] > nums[1]) return 0;
    else if(nums[r] > nums[r-1]) return r;
    l++;
    r--;
    while(l<r){
        int m = (l+r)/2;
        if(nums[m] > nums[m-1] && nums[m] > nums[m+1]) return m;
        else if(nums[m] < nums[m+1]) l = m+1;
        else r = m;
    }
    return l;
}
int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i(0); i<n; i++){
        cin >> A[i];
    }
    cout << findPeakElement(A);
}