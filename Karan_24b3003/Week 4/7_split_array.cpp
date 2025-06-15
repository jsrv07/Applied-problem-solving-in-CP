class Solution {
public:
    bool isValid(vector<int>& nums, int maxSum, int k) {
        int count = 1;
        int currSum = 0;

        for (int num : nums) {
            if (currSum + num > maxSum) {
                count++;
                currSum = num;

                if (count > k)
                    return false;
            } else {
                currSum += num;
            }
        }

        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);
        int result = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (isValid(nums, mid, k)) {
                result = mid;
                right = mid - 1;
            } else
                left = mid + 1;
        }
        return result;
    }
};
