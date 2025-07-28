#include <bits/stdc++.h>
using namespace std;

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        return max(getMax(nums, 0, nums.size()-2), getMax(nums,1,nums.size()-1));
    }
    int getMax(vector<int>& nums, int start, int end){
        int prev1 = 0; 
        int prev2 = 0;               
        
        for (int i = start; i <= end; ++i) {
            int current = max(prev1, prev2 + nums[i]);
            prev2 = prev1;
            prev1 = current;
        }
        
        return prev1;
    }

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i(0); i<n; i++){
        cin >> nums[i];
    }
    cout << rob(nums);
}