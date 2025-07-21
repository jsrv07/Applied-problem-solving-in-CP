package Week_4;

class Solution {
    public int shipWithinDays(int[] weights, int days) {
        int start = 0, end = 0;
        for (int weight : weights) {
            start = Math.max(start, weight);
            end += weight;  
        }

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (countDays(weights, mid) > days) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return start;
    }

    private int countDays(int[] weights, int capacity) {
        int daysNeeded = 1;
        int currentLoad = 0;
        for (int weight : weights) {
            if (currentLoad + weight > capacity) {
                daysNeeded++;
                currentLoad = weight;
            } else {
                currentLoad += weight;
            }
        }
        return daysNeeded;
    }
}