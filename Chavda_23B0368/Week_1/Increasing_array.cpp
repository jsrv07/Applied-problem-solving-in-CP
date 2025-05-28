#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int prev = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        if (x < prev) {
            ans += prev-x;
        }
        prev = x;
    }

    cout << ans << endl;
    return 0;
}