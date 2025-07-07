#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) return false;

    int mapS[256] = {0}, mapT[256] = {0};

    for (int i = 0; i < s.size(); i++) {
        if (mapS[s[i]] != mapT[t[i]]) return false;
        mapS[s[i]] = i + 1;
        mapT[t[i]] = i + 1;
    }

    return true;
}

int main() {
    string s, t;
    cin >> s >> t;

    if (isIsomorphic(s, t))
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
