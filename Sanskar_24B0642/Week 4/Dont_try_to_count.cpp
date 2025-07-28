#include <bits/stdc++.h>
using namespace std;

int minOpsToContain(string x, string s) {
    string current = x;
    for (int ops = 0; ops <= 30; ++ops) {
        if (current.find(s) != string::npos) {
            return ops;
        }
        current += current; // Double the string
        if (current.size() > s.size() * 4) break; // Limit growth
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        cout << minOpsToContain(x, s) << '\n';
    }

    return 0;
}
