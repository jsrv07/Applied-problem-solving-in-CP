class Solution{
  public:
    int binarysearch(vector<int> &arr, int k){
        int l = 0, r = int(arr.size()) - 1;
        int res = -1;

        while (l <= r){
            int mid = l + (r-l) / 2;

            if (arr[mid] == k){
                res = mid;
                r = mid - 1;
            } 
            else if (arr[mid] < k){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }

        return res;
        
    }
};