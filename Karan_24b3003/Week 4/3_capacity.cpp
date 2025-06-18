class Solution {
public:
    bool canShipInDays(vector<int>& weights, int capacity, int days) {
        int currentWeight = 0;
        int dayCount = 1;

        for (int w : weights) {
            if (currentWeight + w > capacity) {
                dayCount++;
                currentWeight = 0;
            }
            currentWeight += w;
        }
        return dayCount <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        int result = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canShipInDays(weights, mid, days)) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return result;
    }
};
