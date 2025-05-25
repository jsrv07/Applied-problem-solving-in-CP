#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int k = 1; k <= n; ++k) {
        long long total_pairs = (1LL * k * k * (k * k - 1)) / 2;
        long long attacking_pairs = 0;
        if (k > 2) {
            attacking_pairs = 4LL * (k - 1) * (k - 2);
        }
        cout << (total_pairs - attacking_pairs) << "\n";
    }
}
