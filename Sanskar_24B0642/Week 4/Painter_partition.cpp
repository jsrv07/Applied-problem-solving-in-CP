#include <bits/stdc++.h>
using namespace std;

bool isPossible(const vector<int>& boards, int k, int maxTime) {
    int painters = 1, total = 0;
    for (int len : boards) {
        if (len > maxTime) return false;

        if (total + len > maxTime) {
            painters++;
            total = len;
        } else {
            total += len;
        }
    }
    return painters <= k;
}

int paintersPartition(vector<int>& boards, int k) {
    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);
    int result = high;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (isPossible(boards, k, mid)) {
            result = mid;
            high = mid - 1; // Try for a smaller max time
        } else {
            low = mid + 1;  // Need to increase max time
        }
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;

    cout << paintersPartition(arr, k) << '\n';
    return 0;
}
