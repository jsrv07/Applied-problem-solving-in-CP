#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;
    vector<pair<long long, int>> a(n); // pair of (value, index)

    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i + 1; // store original position (1-based)
    }

    sort(a.begin(), a.end()); // sort by value

    for (int i = 0; i < n; ++i) {
        long long target = x - a[i].first;
        int l = i + 1, r = n - 1;

        while (l < r) {
            long long sum = a[l].first + a[r].first;
            if (sum == target) {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << endl;
                return 0;
            }
            if (sum < target) {
                l++;
            } else {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
}
