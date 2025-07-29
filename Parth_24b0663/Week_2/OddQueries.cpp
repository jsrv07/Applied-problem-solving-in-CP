#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        long long total_sum = 0;
        vector<int> prefix_odd(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_sum += a[i];
            prefix_odd[i + 1] = prefix_odd[i] + (a[i] % 2);
        }
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            int original_odds = prefix_odd[r] - prefix_odd[l - 1];
            int k_odd = k % 2;
            int new_odds = (r - l + 1) * k_odd;
            int delta = new_odds - original_odds;
            long long new_total_parity = (total_sum + delta) % 2;
            if (new_total_parity == 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}
int main() {
    solve();
    return 0;
}