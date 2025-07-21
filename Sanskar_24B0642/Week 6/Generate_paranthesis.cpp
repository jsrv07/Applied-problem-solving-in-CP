#include <bits/stdc++.h>
using namespace std;

void backtrack(int open, int close, int n, string curr, vector<string> &res) {
    if (curr.length() == 2 * n) {
        res.push_back(curr);
        return;
    }

    if (open < n) {
        backtrack(open + 1, close, n, curr + '(', res);
    }
    if (close < open) {
        backtrack(open, close + 1, n, curr + ')', res);
    }
}

int main() {
    int n;
    cin >> n;

    vector<string> res;
    backtrack(0, 0, n, "", res);

    for (string &s : res) {
        cout << s << " ";
    }
    cout << "\n";

    return 0;
}
