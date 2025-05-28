#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
    }

    sort(weights.begin(), weights.end());

    int i = 0, j = n - 1, count = 0;
    while (i <= j) {
        if (weights[i] + weights[j] <= x) {
            ++i;
        }
        --j;
        ++count;
    }

    cout << count << "\n";
    return 0;
}
