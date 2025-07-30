#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long double minimiseMaxDistance(vector<int> &arr, int k) {
        int n = arr.size();
        long double low = 0.0, high = 0.0;

        for (int i = 0; i < n - 1; ++i) {
            high = max(high, (long double)(arr[i + 1] - arr[i]));
        }

        long double eps = 1e-6;
        while (high - low > eps) {
            long double mid = (low + high) / 2.0;
            int needed = 0;

            for (int i = 0; i < n - 1; ++i) {
                long double gap = arr[i + 1] - arr[i];
                needed += (int)(gap / mid);
            }

            if (needed > k) {
                low = mid;
            } else {
                high = mid;
            }
        }

        return high;
    }
};