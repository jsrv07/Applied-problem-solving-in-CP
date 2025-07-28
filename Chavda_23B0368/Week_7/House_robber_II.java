package Week_7;

class Solution {
    public int rob(int[] nums) {
        int n = nums.length;
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        int temp1[] = new int[n-1];
        int temp2[] = new int[n-1];
        for (int i = 0; i < n; i++) {
            if(i != 0) temp1[i-1] = nums[i];
            if(i != n-1) temp2[i] = nums[i];
        }
        return Math.max(robbery(temp1), robbery(temp2));
    }

    private int robbery(int[] nums) {
        int n = nums.length;
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        int prev2 = nums[0];
        int prev = Math.max(prev2, nums[1]);
        int curr = 0;
        for(int i = 2; i < nums.length; i++) {
            curr = Math.max(prev, prev2+nums[i]);
            prev2 = prev;
            prev = curr;
        }

        return prev;
    }
}