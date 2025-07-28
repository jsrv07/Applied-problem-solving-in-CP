#include <bits/stdc++.h>
using namespace std;

bool areRotations(string s1, string s2) {
    if (s1.length() != s2.length()) return false;
    string temp = s1 + s1;
    return temp.find(s2) != string::npos;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (areRotations(s1, s2)) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
