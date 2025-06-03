class Solution {
public:

    int minEatingSpeed(vector<int>& piles, int h) {
            int low = 1;
    int high = *max_element(piles.begin(), piles.end());
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Calculate total hours if speed is mid
        long long totalHours = 0;
        for (int pile : piles) {
            totalHours += (pile + mid - 1) / mid; // ceil(pile / mid)
        }

        if (totalHours <= h) {
            ans = mid;        // Valid speed, try smaller one
            high = mid - 1;
        } else {
            low = mid + 1;    // Not fast enough, increase speed
        }
    }

    return ans;
    }
};
