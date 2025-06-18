class Solution {
    bool check(vector<int> &stalls, int k, int dist) {
        int cnt = 1;  
        int prev = stalls[0]; 
        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - prev >= dist) {
                prev = stalls[i]; 
                cnt++;
            }
        }

        return (cnt >= k);
    }

    public:
        int aggressiveCows(vector<int> &stalls, int k) {
          	sort(stalls.begin(), stalls.end());
            int res = 0; 
        
          	int l = 1;
          	int h = stalls.back() - stalls[0];
            while(lo <= h) {
                int mid = l + (h - l)/2;
        
                if(check(stalls, k, mid)) {
                    res = mid;
                    l = mid + 1;
                }
                else {
                    h = mid - 1;
                }
            }
            
            return res;
        }
};