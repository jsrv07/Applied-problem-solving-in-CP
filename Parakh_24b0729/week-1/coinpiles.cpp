#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        // Both a and b must be divisible by 3 together, and neither can be more than double the other
        if ((a + b) % 3 == 0 && 2 * a >= b && 2 * b >= a) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}