package Week_6;

class Solution {

    static Boolean isSubsetSum(int arr[], int sum) {
        Boolean dp[][] = new Boolean[arr.length][sum+1];
        return check(arr, sum, 0, dp);
    }
    
    private static boolean check(int[] arr, int sum, int idx, Boolean[][] dp) {
        if (sum == 0)
            return true;
        if (idx >= arr.length || sum < 0)
            return false;
        
        if(dp[idx][sum] != null)
            return dp[idx][sum];
        
        if(check(arr, sum-arr[idx], idx+1, dp))
            return dp[idx][sum] = true;
        if(check(arr, sum, idx+1,dp))
            return dp[idx][sum] = true;
        return dp[idx][sum] = false;
    }
}