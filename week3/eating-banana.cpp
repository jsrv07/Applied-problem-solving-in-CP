class Solution {
public:
    bool canEatAll(vector<int>& piles, int h, int k) {
        long long time = 0;
        for (int pile : piles) {
            time += (pile + k - 1) / k;
        }
        return time <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(), piles.end());
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canEatAll(piles, h, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};
