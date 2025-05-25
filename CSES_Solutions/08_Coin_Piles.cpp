#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int total = a + b;
        int max_ab = max(a, b);
        int min_ab = min(a, b);

        if (total % 3 == 0 && min_ab * 2 >= max_ab)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
