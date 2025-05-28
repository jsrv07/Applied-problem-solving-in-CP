#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int m, n;
        cin >> m >> n;

        if (m == n && m%3 == 0) {
            cout << "YES" << endl;
        } else if ((m+n) % 3 == 0 && (m >= n && m <= 2 * n) || (n >= m && n <= 2 * m)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}