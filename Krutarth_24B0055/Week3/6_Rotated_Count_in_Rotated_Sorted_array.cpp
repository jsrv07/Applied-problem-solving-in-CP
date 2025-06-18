class Solution {
  public:
    int findKRotation(vector<int> &arr){
        int low = 0, high = arr.size() - 1;

        while (low < high){
            if (arr[low] <= arr[high]){
                return low;
            }
                    
            int mid = (low + high) / 2;

            if (arr[mid] > arr[high]){
                low = mid + 1;
            }
        
            else{
                high = mid;
            }        
        }
        
        return low; 
    }
};
