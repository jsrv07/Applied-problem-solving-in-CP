class Solution {
public:
    bool isValid(vector<int>& boards, int maxTime, int k) {
        int painters = 1;
        int currSum = 0;

        for (int board : boards) {
            if (currSum + board > maxTime) {
                painters++;
                currSum = board;
                if (painters > k)
                    return false;
            } else {
                currSum += board;
            }
        }

        return true;
    }

    int minTimeToPaint(vector<int>& boards, int k) {
        int low = *max_element(boards.begin(), boards.end());
        int high = accumulate(boards.begin(), boards.end(), 0);
        int result = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isValid(boards, mid, k)) {
                result = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return result;
    }
};
