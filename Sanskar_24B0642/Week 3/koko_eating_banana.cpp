#include <bits/stdc++.h>
using namespace std;

bool canEatAll(const vector<int>& piles, int h, int k) {
    int hours = 0;
    for (int pile : piles) {
        hours += (pile + k - 1) / k;
    }
    return hours <= h;
}

int minEatingSpeed(const vector<int>& piles, int h) {
    int left = 1, right = *max_element(piles.begin(), piles.end());
    int ans = right;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (canEatAll(piles, h, mid)) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h;
    cin >> n >> h;
    vector<int> piles(n);
    for (int i = 0; i < n; ++i) {
        cin >> piles[i];
    }

    cout << minEatingSpeed(piles, h) << '\n';

    return 0;
}
