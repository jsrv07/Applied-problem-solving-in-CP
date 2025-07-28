#include <bits/stdc++.h>
using namespace std;

void solve() {
    string num;
    cin >> num;

    for (int i = num.size() - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 == 1) {
            cout << num.substr(0, i + 1) << '\n';
            return;
        }
    }

    cout << "" << '\n'; // No odd digit found
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}
