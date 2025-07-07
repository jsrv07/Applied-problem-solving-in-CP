#include <bits/stdc++.h>
using namespace std;

void generate(int i, string &s, string temp, vector<string> &res) {
    if (i == s.length()) {
        if (!temp.empty()) res.push_back(temp); // skip empty subsequence
        return;
    }

    // Include s[i]
    generate(i + 1, s, temp + s[i], res);

    // Exclude s[i]
    generate(i + 1, s, temp, res);
}

vector<string> AllPossibleStrings(string s) {
    vector<string> res;
    generate(0, s, "", res);
    sort(res.begin(), res.end());
    return res;
}

// Driver code (for CP testing)
int main() {
    string s;
    cin >> s;

    vector<string> result = AllPossibleStrings(s);
    for (string &str : result) {
        cout << str << " ";
    }
    cout << "\n";

    return 0;
}
