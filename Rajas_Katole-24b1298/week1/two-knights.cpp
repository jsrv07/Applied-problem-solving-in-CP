#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int k = 1; k <= n; ++k) {
        long long total = k * k;
        total = total * (total - 1) / 2;
        long long attack = 4 * (k - 1) * (k - 2);
        cout << total - attack << '\n';
    }
    return 0;
}