#include <bits/stdc++.h>
using namespace std;

void generate(int n, string str, char last, vector<string> &res) {
    if (str.length() == n) {
        res.push_back(str);
        return;
    }

    // Always allowed to add '0'
    generate(n, str + '0', '0', res);

    // Only add '1' if last character is not '1'
    if (last != '1') {
        generate(n, str + '1', '1', res);
    }
}

int main() {
    int n;
    cin >> n;

    vector<string> res;
    generate(n, "", '0', res);

    sort(res.begin(), res.end()); // Lexicographically increasing order
    for (const string &s : res) {
        cout << s << " ";
    }
    cout << "\n";

    return 0;
}
