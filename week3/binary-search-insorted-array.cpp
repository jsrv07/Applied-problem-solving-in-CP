class Solution {
public:
    int binarysearch(vector<int>& arr, int k) {
        int left = 0, right = arr.size() - 1;
        int result = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == k) {
                result = mid;
                right = mid - 1; // Continue to look for smaller index
            } else if (arr[mid] < k) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    }
};
