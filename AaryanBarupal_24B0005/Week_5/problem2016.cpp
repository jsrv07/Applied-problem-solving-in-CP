class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int small = nums[0];
        int answer = -1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] < small) {
                small = nums[i];
            } else if (nums[i] > small) {
                int diff = nums[i] - small;
                answer = max(answer, diff);
            }
        }
        return answer;
    }
};
