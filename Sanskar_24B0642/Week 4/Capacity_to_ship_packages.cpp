#include <bits/stdc++.h>
using namespace std;

bool canShip(const vector<int>& weights, int days, int capacity) {
    int d = 1, load = 0;
    for (int w : weights) {
        if (load + w > capacity) {
            d++;
            load = 0;
        }
        load += w;
    }
    return d <= days;
}

int shipWithinDays(vector<int>& weights, int D) {
    int low = *max_element(weights.begin(), weights.end()); // Min possible capacity
    int high = accumulate(weights.begin(), weights.end(), 0); // Max possible capacity
    int answer = high;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (canShip(weights, D, mid)) {
            answer = mid;
            high = mid - 1; // Try smaller capacity
        } else {
            low = mid + 1; // Increase capacity
        }
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, D;
    cin >> n >> D;
    vector<int> weights(n);
    for (int i = 0; i < n; ++i) cin >> weights[i];

    cout << shipWithinDays(weights, D) << '\n';
    return 0;
}
