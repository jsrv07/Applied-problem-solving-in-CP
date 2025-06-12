#include <bits/stdc++.h>
using namespace std;

// Fast exponentiation with overflow check
long long power(long long base, int n, long long x) {
    long long result = 1;
    for (int i = 0; i < n; i++) {
        result *= base;
        if (result > x)  // Stop early if result exceeds x
            return x + 1;
    }
    return result;
}

int NthRoot(int n, int x) {
    int left = 1, right = x, ans = 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        long long val = power(mid, n, x);

        if (val == x)
            return mid;
        else if (val < x) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    cout << NthRoot(n, x) << '\n';

    return 0;
}
