#include <bits/stdc++.h>
using namespace std;

bool isPossible(const vector<int> &stalls, int k, int x) {
    int cowsPlaced = 1, last = stalls[0];
    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - last >= x) {
            cowsPlaced++;
            last = stalls[i];
            if (cowsPlaced == k)
                return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());
    int low = 1, high = stalls.back() - stalls[0], ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(stalls, k, mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> stalls = {1, 2, 8, 4, 9};
    int k = 3;
    cout << aggressiveCows(stalls, k) << "\n";
    return 0;
}
