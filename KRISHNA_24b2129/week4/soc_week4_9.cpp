#include <bits/stdc++.h>
using namespace std;

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

        string cur = x;
        int ans = -1;

        for (int ops = 0; ops <= m + 5; ops++) {
            if (cur.find(s) != string::npos) {
                ans = ops;
                break;
            }
            cur += cur; 
            if (cur.size() > 200) break;
        }
        cout << ans << '\n';
    }
    return 0;
}