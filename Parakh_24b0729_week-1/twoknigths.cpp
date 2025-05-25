#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    for (long long k = 1; k <= n; ++k) {
        long long total = k * k * (k * k - 1) / 2;
        long long attacks = (k > 2) ? 4 * (k - 1) * (k - 2) : 0;
        cout << (total - attacks) << "\n";
    }
    return 0;
}
