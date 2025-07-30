#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; ++i) {
        long long target = x - a[i].first;
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            long long sum = a[left].first + a[right].first;
            if (sum == target) {
                cout << a[i].second << " " << a[left].second << " " << a[right].second << endl;
                return 0;
            } else if (sum < target) {
                ++left;
            } else {
                --right;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}