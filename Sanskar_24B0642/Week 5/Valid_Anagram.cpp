#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    int count[26] = {0};

    for (char c : s) count[c - 'a']++;
    for (char c : t) count[c - 'a']--;

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return false;
    }

    return true;
}

int main() {
    string s, t;
    cin >> s >> t;

    cout << (isAnagram(s, t) ? "Yes\n" : "No\n");

    return 0;
}
