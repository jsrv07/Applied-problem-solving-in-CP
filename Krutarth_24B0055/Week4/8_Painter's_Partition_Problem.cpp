class Solution {
    bool isPossible(const vector<int>& boards, int k, int max_time) {
        int painters = 1;
        int current_sum = 0;

        for (int length : boards) {
            if (length > max_time) return false;

            if (current_sum + length > max_time) {
                painters++;
                current_sum = length;

                if (painters > k) return false;
            }
            else{
                current_sum += length;
            }
        }

        return true;
    }

    public:
        int minTime(vector<int>& boards, int k){
            int l = *max_element(boards.begin(), boards.end());
            int h = accumulate(boards.begin(), boards.end(), 0);
            int res = h;
    
            while (l <= h){
                int mid = l + (h - l) / 2;
    
                if(isPossible(boards, k, mid)){
                    res = mid;
                    h = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
    
            return result;
        }
};