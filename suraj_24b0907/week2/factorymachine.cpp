#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, t;
    cin >> n >> t;
    vector<long long> k(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    long long low = 1, high = 1e18;
    long long ans = -1;
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long products = 0;
        for (int i = 0; i < n; i++) {
            products += mid / k[i];
            if (products >= t) break;
        }
        if (products >= t) {
            ans = mid; 
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << endl;
}
