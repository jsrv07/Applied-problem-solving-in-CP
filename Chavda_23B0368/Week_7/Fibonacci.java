package Week_7;

class Solution {
    public int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        int prev = 1, prev2 = 0;
        int ans = 0;
        for (int i = 1; i < n; i++) {
            ans = prev + prev2;
            prev2 = prev;
            prev = ans;
        }
        return ans;
    }
}