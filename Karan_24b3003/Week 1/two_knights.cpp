#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int k = 1; k <= n; k++) {
        long long total = (long long)k * k * (k * k - 1) / 2;
        long long attack = 0;
        if (k > 2) 
            attack = 4LL * (k - 1) * (k - 2);
        cout << total - attack << "\n";
    }
    return 0;
}
