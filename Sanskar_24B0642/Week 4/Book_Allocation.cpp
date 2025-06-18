#include <bits/stdc++.h>
using namespace std;

bool isValid(const vector<int>& arr, int k, int maxPages) {
    int students = 1, currentSum = 0;

    for (int pages : arr) {
        if (pages > maxPages) return false;

        if (currentSum + pages > maxPages) {
            students++;
            currentSum = pages;
            if (students > k) return false;
        } else {
            currentSum += pages;
        }
    }

    return true;
}

int allocateMinimumPages(const vector<int>& arr, int k) {
    int n = arr.size();
    if (k > n) return -1; // Not enough books

    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    int result = high;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (isValid(arr, k, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
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

    cout << allocateMinimumPages(arr, k) << '\n';
    return 0;
}
