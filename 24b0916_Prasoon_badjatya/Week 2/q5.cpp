#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long t;
    cin >> n >> t;
    
    vector<long long> machines(n);
    for (int i = 0; i < n; ++i) {
        cin >> machines[i];
    }

    long long low = 1, high = 1e18;
    
    while (low < high) {
        long long mid = low + (high - low) / 2;
        long long total = 0;
        for (int i = 0; i < n; ++i) {
            total += mid / machines[i];
            if (total >= t) break; 
        }
        if (total >= t) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    cout << low << endl;
}
