class Solution {
public:
    int smallestDivisor(vector<int>& nums, int t) {
        int left = 1, right = *max_element(nums.begin(), nums.end());

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int sum = 0;

            for (int num : nums) {
                sum += (num + mid - 1) / mid; 
            }

            if (sum <= t) {
                right = mid - 1; 
            } else {
                left = mid + 1; 
            }
        }

        return left;
    }
};