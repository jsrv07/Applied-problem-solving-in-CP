class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int low = 0, high = arr.size() - 1;
        while (low <= high) {
            if (arr[low] <= arr[high])
                return low;
            int mid = (low + high) / 2;
            int next = (mid + 1) % arr.size();
            int prev = (mid - 1 + arr.size()) % arr.size();
            if (arr[mid] <= arr[next] && arr[mid] <= arr[prev])
                return mid;
            else if (arr[mid] >= arr[low])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return 0;
    }
};
