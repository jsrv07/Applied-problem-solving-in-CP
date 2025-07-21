#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
    string result;
    int depth = 0;

    for (char c : s) {
        if (c == '(') {
            if (depth > 0) result += c;
            depth++;
        } else { // c == ')'
            depth--;
            if (depth > 0) result += c;
        }
    }

    return result;
}

int main() {
    string s;
    cin >> s;
    cout << removeOuterParentheses(s) << '\n';
    return 0;
}
