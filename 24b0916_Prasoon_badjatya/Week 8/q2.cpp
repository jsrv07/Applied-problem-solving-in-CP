#include <bits/stdc++.h>
using namespace std;

int totalSubsetWithGivenSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> prev(target+1,0), curr(target+1,0);
    prev[0] = 1;
    for(int i = 1; i <= n; i++) {
        curr = prev;
        for(int j = 0; j <= target; j++) {
            curr[j] = prev[j];
            if(j >= nums[i-1])
                curr[j] += prev[j - nums[i-1]];
        }
        prev = curr;
    }

    return curr[target];
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << totalSubsetWithGivenSum(nums, target);
}
