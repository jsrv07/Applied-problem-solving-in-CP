class Solution {
public:
    int lowerBound(vector<int>& arr, int target) {
        int low = 0, high = arr.size();
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] < target)
                low = mid + 1;
            else
                high = mid;
        }
        return low;
    }

    int upperBound(vector<int>& arr, int target) {
        int low = 0, high = arr.size();
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] <= target)
                low = mid + 1;
            else
                high = mid;
        }
        return low;
    }

    int countFreq(vector<int>& arr, int target) {
        int lower = lowerBound(arr, target);
        int upper = upperBound(arr, target);
        if (lower == arr.size() || arr[lower] != target)
            return 0;
        return upper - lower;
    }
};
