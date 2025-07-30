class Solution {
public:
    bool isPossible(vector<int>& arr, int k, int maxLen) {
        int painterCount = 1, currSum = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            if (currSum + arr[i] <= maxLen) {
                currSum += arr[i];
            } else {
                painterCount++;
                currSum = arr[i];
                if (painterCount > k) return false;
            }
        }
        return true;
    }

    int minTime(vector<int>& arr, int k) {
        int n = arr.size();
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);

        int result = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isPossible(arr, k, mid)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return result;
    }
};
