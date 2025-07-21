#include <bits/stdc++.h>
using namespace std;

// Binary search: find smallest index where missing >= k
int findKthPositive(const vector<int>& arr, int k) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        int missing = arr[mid] - (mid + 1);
        if (missing < k)
            left = mid + 1;
        else
            right = mid - 1;
    }

    // kth missing is left + k
    return left + k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Input
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;

    // Output
    cout << findKthPositive(arr, k) << '\n';
    return 0;
}
