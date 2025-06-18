class Solution {
    bool canMakeBouquets(const vector<int>& bloomDay, int day, int m, int k){
        int bouquets = 0;
        int flowers = 0;

        for(int bloom : bloomDay){
            if(bloom <= day){
                flowers++;
                if(flowers == k){
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
        }
        return bouquets >= m;
    }
    public:
        int minDays(vector<int>& bloomDay, int m, int k){
            long long total = 1LL * m * k;
            if(total > bloomDay.size()) return -1;

            int l = *min_element(bloomDay.begin(), bloomDay.end());
            int r = *max_element(bloomDay.begin(), bloomDay.end());
            int ans = -1;

            while(l <= r){
                int mid = l +(r - l) / 2;

                if(canMakeBouquets(bloomDay, mid, m, k)){
                    ans = mid;
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }

            return ans;
        }
};