#include <bits/stdc++.h>
using namespace std;

bool canMake(const vector<int>& bloomDay, int day, int m, int k) {
    int bouquets = 0, count = 0;
    for (int b : bloomDay) {
        if (b <= day) {
            count++;
            if (count == k) {
                bouquets++;
                count = 0;
            }
        } else {
            count = 0;
        }
    }
    return bouquets >= m;
}

int minDays(vector<int>& bloomDay, int m, int k) {
    int n = bloomDay.size();
    if (1LL * m * k > n) return -1;

    int low = *min_element(bloomDay.begin(), bloomDay.end());
    int high = *max_element(bloomDay.begin(), bloomDay.end());
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (canMake(bloomDay, mid, m, k)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Example input
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> bloomDay(n);
    for (int i = 0; i < n; ++i) cin >> bloomDay[i];

    cout << minDays(bloomDay, m, k) << '\n';
    return 0;
}
