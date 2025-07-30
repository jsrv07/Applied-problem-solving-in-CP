package Week_7;

class Solution {
    public int rob(int[] nums) {
        if(nums.length == 0) return 0;
        if(nums.length == 1) return nums[0];
        int n = nums.length;
        int prev2 = nums[0];
        int prev = Math.max(prev2, nums[1]);
        int curr = 0;
        for(int i = 2; i < n; i++) {
            curr = Math.max(prev, prev2+nums[i]);
            prev2 = prev;
            prev = curr;
        }

        return prev;
    }
}