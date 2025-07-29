#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << a[0] << '\n';
        return 0;
    }

    vector<long long> prefix(n);
    vector<long long> suffix(n);

    prefix[0] = a[0];
    for (int i = 1; i < n; ++i) {
        prefix[i] = gcd(prefix[i-1], a[i]);
    }

    suffix[n-1] = a[n-1];
    for (int i = n-2; i >= 0; --i) {
        suffix[i] = gcd(suffix[i+1], a[i]);
    }

    vector<long long> gcd_without(n);
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            gcd_without[i] = suffix[i+1];
        } else if (i == n-1) {
            gcd_without[i] = prefix[i-1];
        } else {
            gcd_without[i] = gcd(prefix[i-1], suffix[i+1]);
        }
    }

    long long res = 0;
    for (int i = 0; i < n; ++i) {
        long long current_gcd = gcd_without[i];
        long long current_lcm = lcm(a[i], current_gcd);
        if (i == 0) {
            res = current_lcm;
        } else {
            res = gcd(res, current_lcm);
        }
    }
    cout << res << '\n';

    return 0;
}