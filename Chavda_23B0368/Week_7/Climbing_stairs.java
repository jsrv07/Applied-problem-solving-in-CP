package Week_7;

class Solution {
    public int climbStairs(int n) {
        if(n == 1 || n == 2)
            return n;
        if(n <= 0)
            return 0;
        int prev2 = 1;
        int prev = 2;
        int curr = 0;
        for(int i = 3; i <= n; i++) {
            curr = prev + prev2;
            prev2 = prev;
            prev = curr;
        }
        return curr;
    }
}