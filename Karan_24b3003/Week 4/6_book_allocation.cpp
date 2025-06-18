class Solution {
public:
    bool isValidAllocation(vector<int>& arr, int k, int maxPages) {
        int studentCount = 1;
        int currentSum = 0;

        for (int pages : arr) {
            if (currentSum + pages > maxPages) {
                studentCount++;
                currentSum = pages;

                if (studentCount > k)
                    return false;
            } else
                currentSum += pages;
        }

        return true;
    }

    int findPages(vector<int>& arr, int k) {
        int n = arr.size();
        if (k > n) return -1; 

        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        int result = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isValidAllocation(arr, k, mid)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;
    }
};