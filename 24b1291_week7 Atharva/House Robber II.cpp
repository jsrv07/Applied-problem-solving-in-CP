class Solution {
public:

    int solve(vector<int>& nums, int s, int e) {
        int prev1 = 0, prev2 = 0;
        
        for(int i=s; i<e; i++){
            int curr = max(nums[i] + prev2, prev1);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);
        
        return max(solve(nums, 0, n-1), solve(nums, 1, n));
    }
};