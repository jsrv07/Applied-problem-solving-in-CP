#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canMake(vector<int>& bloomDay, int m, int k, int days) {
        int bouquets = 0, flowers = 0;

        for (int day : bloomDay) {
            if (day <= days) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
        }
        return bouquets >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total = 1LL * m * k;
        if (total > bloomDay.size()) return -1;
        int left = 1;
        int right = *max_element(bloomDay.begin(), bloomDay.end());
        int answer = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canMake(bloomDay, m, k, mid)) {
                answer = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return answer;
    }
};
