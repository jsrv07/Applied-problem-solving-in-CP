#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<tuple<int, int, int>> ranges(n);
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        ranges[i] = {x, y, i};
    }
    vector<int> contained(n, 0);
    auto sorted1 = ranges;
    sort(sorted1.begin(), sorted1.end(), [](auto &a, auto &b) {
        if (get<0>(a) == get<0>(b))
            return get<1>(a) > get<1>(b);
        return get<0>(a) < get<0>(b);
    });

    int max_y = -1;
    for (auto &[x, y, idx] : sorted1) {
        if (y <= max_y) {
            contained[idx] = 1;
        }
        max_y = max(max_y, y);
    }
    vector<int> contains(n, 0);
    auto sorted2 = ranges;
    sort(sorted2.begin(), sorted2.end(), [](auto &a, auto &b) {
        if (get<0>(a) == get<0>(b))
            return get<1>(a) > get<1>(b); 
        return get<0>(a) < get<0>(b);
    });

    int min_y = 1e9 + 1;
    for (int i = n - 1; i >= 0; --i) {
        auto &[x, y, idx] = sorted2[i];
        if (y >= min_y) {
            contains[idx] = 1;
        }
        min_y = min(min_y, y);
    }
    for (int i = 0; i < n; ++i) cout << contains[i] << " ";
    cout << "\n";
    for (int i = 0; i < n; ++i) cout << contained[i] << " ";
    cout << "\n";

    return 0;
}