#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<tuple<int, int, int>> ranges;  
    for (int i = 0; i<n; i++) {
        int x, y;
        cin >> x >> y;
        ranges.emplace_back(x, y, i);
    }
    vector<int> contains(n, 0);
    vector<int> contained(n, 0);
    sort(ranges.begin(), ranges.end(), [](const auto &a, const auto &b) {
        if (get<0>(a) == get<0>(b))
            return get<1>(a) > get<1>(b);
        return get<0>(a) < get<0>(b);
    });
    int min_end = INT_MAX;
    for (int i = n - 1; i >= 0; --i) {
        int end = get<1>(ranges[i]);
        int idx = get<2>(ranges[i]);
        if (end >= min_end) contains[idx] = 1;
        min_end = min(min_end, end);
    }

    int max_end = -1;
    for (int i = 0; i < n; ++i) {
        int end = get<1>(ranges[i]);
        int idx = get<2>(ranges[i]);
        if (end <= max_end) contained[idx] = 1;
        max_end = max(max_end, end);
    }
    for (int x : contains) cout << x << " ";
    cout << endl;
    for (int x : contained) cout << x << " ";

}
