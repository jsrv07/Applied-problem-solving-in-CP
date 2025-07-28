#include <bits/stdc++.h>
using namespace std;

int findMinimumTime(int startIndex, int totalBoards, vector<int> &boards, int paintersLeft, vector<vector<int>> &memo) {
    if (startIndex >= totalBoards)
        return 0;
    if (paintersLeft == 0)
        return INT_MAX;
    if (memo[startIndex][paintersLeft] != -1)
        return memo[startIndex][paintersLeft];
    int currentPainterTime = 0;
    int minimumTotalTime = INT_MAX;
    for (int i = startIndex; i < totalBoards; i++) {
        currentPainterTime += boards[i];
        int timeForRemaining = findMinimumTime(i + 1, totalBoards, boards, paintersLeft - 1, memo);
        int totalTime = max(currentPainterTime, timeForRemaining);
        minimumTotalTime = min(minimumTotalTime, totalTime);
    }
    return memo[startIndex][paintersLeft] = minimumTotalTime;
}

int getMinimumPaintingTime(vector<int> &boards, int totalPainters) {
    int totalBoards = boards.size();
    vector<vector<int>> memo(totalBoards, vector<int>(totalPainters + 1, -1));
    return findMinimumTime(0, totalBoards, boards, totalPainters, memo);
}

int main() {
    vector<int> boards = {10, 10, 10, 10};
    int painters = 2;
    int result = getMinimumPaintingTime(boards, painters);
    cout << result << endl;
    return 0;
}

class Solution {
  public:
    bool isPossible(vector<int>& arr, int k, int maxTime) {
        int painters = 1, currSum = 0;
        for (int board : arr) {
            if (board > maxTime) return false;
            if (currSum + board > maxTime) {
                painters++;
                currSum = board;
                if (painters > k) return false;
            } else {
                currSum += board;
            }
        }
        return true;
    }

    int minTime(vector<int>& arr, int k) {
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0), res = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isPossible(arr, k, mid)) {
                res = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return res;
    }
};
