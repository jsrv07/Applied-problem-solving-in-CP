#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    getline(cin, s);  // Read full line to handle spaces

    vector<string> vec;
    string word, result;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            word.clear();
            while (i < s.size() && s[i] != ' ') {
                word += s[i++];
            }
            vec.push_back(word);
        }
    }

    for (int i = vec.size() - 1; i >= 0; i--) {
        result += vec[i];
        if (i != 0) result += ' ';
    }

    cout << result << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // For multiple test cases
    // int t;
    // cin >> t;
    // cin.ignore();  // Ignore newline after t
    // while (t--) solve();

    // For single test case
    solve();

    return 0;
}
