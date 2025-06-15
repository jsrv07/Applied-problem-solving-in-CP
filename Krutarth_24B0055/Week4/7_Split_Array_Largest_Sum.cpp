class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(), nums.end());
        int r = 0;
        for(int num : nums){
            r += num;
        }
        while(l <= r){
            int mid = l + (r - l) / 2;
            int current_sum = 0;
            int splits = 1;
            for(int num : nums){
                if(current_sum+num > mid){
                    splits++;
                    current_sum = 0;
                }
                current_sum += num;
            }

            if(splits <= k){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        return l;
    }
};