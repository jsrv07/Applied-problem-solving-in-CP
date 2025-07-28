#include <bits/stdc++.h>
using namespace std;

bool canPlaceCows(const vector<int>& stalls, int k, int dist) {
    int count = 1; // Place first cow at first stall
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); ++i) {
        if (stalls[i] - lastPos >= dist) {
            count++;
            lastPos = stalls[i];
        }
        if (count >= k) return true;
    }

    return false;
}

int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end());

    int low = 1;
    int high = stalls.back() - stalls.front();
    int ans = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (canPlaceCows(stalls, k, mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> stalls(n);
    for (int i = 0; i < n; ++i) cin >> stalls[i];

    cout << aggressiveCows(stalls, k) << '\n';
    return 0;
}
