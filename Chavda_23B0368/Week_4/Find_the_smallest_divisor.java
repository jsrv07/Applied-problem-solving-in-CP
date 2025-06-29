package Week_4;

class Solution {
    public int smallestDivisor(int[] nums, int threshold) {
        int n = nums.length;
        if(n > threshold)
            return -1;

        int start = 1, end = 1;
        for(int num : nums) {
            end = Math.max(end, num);
        }

        while(start <= end) {
            int mid = end - (end-start)/2;
            if(sum(nums, mid) <= threshold)
                end = mid - 1;
            else 
                start = mid + 1;
        }

        return start;
    }

    private int sum(int[] nums, int div) {
        int sum = 0;
        for(int num : nums) {
            if(num%div == 0)
                sum += (num/div);
            else 
                sum += (num/div) + 1;
        }
        return sum;
    }
}