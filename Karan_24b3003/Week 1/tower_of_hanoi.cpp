#include <iostream>
using namespace std;

void solve(int n, int from, int to, int between) {
    if (n == 0) return;
    solve(n - 1, from, between, to);
    cout << from << " " << to << "\n";
    solve(n - 1, between, to, from);
}

int main() {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << "\n";
    solve(n, 1, 3, 2);
    return 0;
}
