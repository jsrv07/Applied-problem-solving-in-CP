class Solution {
    bool check(vector<int> &arr, int k, int page_limit){
        int cnt = 1;
        int page_sum = 0;
        
        for(int i = 0; i < arr.size(); i++){
            if(page_sum + arr[i] > page_limit){
                cnt++;
                page_sum = arr[i];
            }
            else{
                page_sum += arr[i];
            }
        }
        
        return (cnt <= k);
    }

    public:
        int findPages(vector<int> &arr, int k){
            if(k > arr.size())
                return -1;
            
            int l = *max_element(arr.begin(), arr.end());
            int h = accumulate(arr.begin(), arr.end(), 0);
            int res = -1;
            
            while(l <= h){
                int mid = l + (h - l)/2;
                
                if(check(arr, k, mid)){
                    res = mid;
                    h = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
            
            return res;
        }
    
};