#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int moves = 0;
    int prev, curr;

    cin >> prev;

    for (int i = 1; i < n; ++i) {
        cin >> curr;
        if (curr < prev) {
            moves += (prev - curr);
        } else {
            prev = curr;
        }
    }

    cout << moves << endl;
}
