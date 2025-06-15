class Solution {
    public:
        int shipWithinDays(vector<int>& weights, int days){
            int l = *max_element(weights.begin(), weights.end());
            
            int right = 0;
            for(int w : weights){
                right += w;
            }

            int res = right;

            while(l <= right){
                int mid = l + (right - l) / 2;

                int current_load = 0, needed_days = 1;
                for(int w : weights){
                    if(current_load + w > mid){
                        needed_days++;
                        current_load = 0;
                    }
                    current_load += w;
                }

                if(needed_days <= days){
                    res = mid;
                    right = mid - 1;
                } else {
                    l = mid + 1;
                }
            }

            return res;
        }
};