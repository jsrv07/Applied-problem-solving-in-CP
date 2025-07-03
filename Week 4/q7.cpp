#include<bits/stdc++.h>
using namespace std;
    int splitArray(vector<int>& nums, int k) {
        int low = 0, high = 0;
        for(auto w : nums){
            high += w;
            low = max(low, w);
        }
        int ans = high;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(check(nums, k, mid)) {
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
    bool check(vector<int>& nums, int k, int mid){
        int total = 1, current = 0;
        for(int num : nums){
            current += num;
            if(current > mid){
                total++;
                current = num;
                if(total > k) return false;
            }
        }
        return true;
    }

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i(0); i<n; i++){
        cin >> arr[i];
    }
    cout << splitArray(arr, k);
}