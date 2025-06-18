#include <bits/stdc++.h>
using namespace std;

int countRotations(const vector<int>& arr) {
    int n = arr.size();
    int left = 0, right = n - 1;

    while (left <= right) {
        if (arr[left] <= arr[right])
            return left;

        int mid = (left + right) / 2;
        int prev = (mid - 1 + n) % n;
        int next = (mid + 1) % n;

        if (arr[mid] <= arr[prev] && arr[mid] <= arr[next])
            return mid;

        if (arr[mid] >= arr[left])
            left = mid + 1;
        else
            right = mid - 1; 
    }

    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;

    cout << countRotations(arr) << '\n';

    return 0;
}
