package Week_7;

public class Partition_equal_subset_sum {
    Boolean[][] dp;
    public boolean canPartition(int[] nums) {
        int total = 0;
        for(int num : nums) total += num;

        if(total % 2 != 0)  return false;
        dp = new Boolean[nums.length][(total/2) + 1];
        return dfs(nums, 0, 0, total/2);
    }

    private boolean dfs(int[] nums, int idx, int sum, int target) {
        if(sum == target)
            return true;
        if(idx == nums.length || sum > target)  
            return false;
        if(dp[idx][sum] != null)    
            return dp[idx][sum];

        boolean take = dfs(nums, idx+1, sum+nums[idx], target);
        boolean not_take = dfs(nums, idx+1, sum, target);

        return dp[idx][sum] = take || not_take;
    }
}