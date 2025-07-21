package Week_4;

class Solution {
    public int minDays(int[] bloomDay, int m, int k) {
        int n = bloomDay.length;
        if(n < m*k)
            return -1;

        int left = 0, right = 0;
        int minDays = -1;
        for(int i = 0; i < n; i++) {
            right = Math.max(right, bloomDay[i]);
        }

        while (left <= right) {
            int mid = (right + left) / 2;
            if (numBouq(bloomDay, mid, k) < m) {
                left = mid + 1;
            } else {
                right = mid - 1;
                minDays = mid;
            }
        }
        return minDays;
    }

    private int numBouq(int[] bloomDay, int days, int k) {
        int consec = 0, count = 0;
        int n = bloomDay.length;
        for(int i = 0; i < n; i++) {
            if(bloomDay[i] <= days) {
                consec++;
                if(consec == k) {
                    count++;
                    consec = 0;
                }
            } else {
                consec = 0;
            }
        }

        return count;
    }
}