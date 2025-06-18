#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


int getSum(vector<int>& nums, int divisor) {
    int total = 0;
    for (int num : nums) {
        total += (num + divisor - 1) / divisor; 
    }
    return total;
}


int smallestDivisor(vector<int>& nums, int threshold) {
    int low = 1;
    int high = *max_element(nums.begin(), nums.end());
    int ans = high;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (getSum(nums, mid) <= threshold) {
            ans = mid;
            high = mid - 1; 
        } else {
            low = mid + 1;  
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int threshold;
    cin>>threshold;
    cout << smallestDivisor(nums, threshold);
}