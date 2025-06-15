class Solution {
    int computeSum(const vector<int>& nums, int divisor){
        int total = 0;
        for(int num : nums){
            total += (num + divisor - 1) / divisor;
        }
        return total;
    }
    
    public:
        int smallestDivisor(vector<int>& nums, int threshold){
            int l = 1, r = *max_element(nums.begin(), nums.end());
            int result = r;

            while(l <= r){
                int mid = l +(r - l) / 2;
                if(computeSum(nums, mid) <= threshold){
                    result = mid;
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }

            return result;
        }

};