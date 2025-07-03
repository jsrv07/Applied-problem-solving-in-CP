#include<bits/stdc++.h>
using namespace std;
int smallestDivisor(vector<int>& nums, int threshold) {
    int low = 1, high = 0;
    for(auto w : nums){
        high = max(high, w);
    }
    while(low<=high){
        int mid = low + (high-low)/2;
        if(check(nums, threshold, mid)) {
            high = mid-1;
        }
        else low = mid+1;
    }
    return low;
}
bool check(vector<int>& nums, int threshold, int mid){
    int current = 0;
    for(int num : nums){
        current+=(num+mid-1)/mid;
    }
    return current <= threshold;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i(0); i<n; i++){
        cin >> arr[i];
    }
    cout << smallestDivisor(arr, k);
}