# include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int aggressiveCows(vector<int>& stalls, int k) {
        sort(stalls.begin(), stalls.end());
        int low = 1, high = stalls.back() - stalls.front(), mid;

        while (low <= high) {
            mid = low + (high - low) / 2;
            int x = 1, y = stalls[0];
            for (int i = 1; i < stalls.size(); i++)
                if (stalls[i] - y >= mid) { x++; y = stalls[i]; }
            if (x >= k) low = mid + 1;
            else high = mid - 1;
        }
        return high;
    }
};