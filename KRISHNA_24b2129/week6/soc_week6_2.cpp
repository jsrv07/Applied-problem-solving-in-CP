#include <bits/stdc++.h>
using namespace std;

void generateParentheses(int n, int open, int close, string str) {
    if (str.length() == 2 * n) {
        cout << str << endl;
        return;
    }
    if (open < n) {
        generateParentheses(n, open + 1, close, str + '(');
    }
    if (close < open) {
        generateParentheses(n, open, close + 1, str + ')');
    }
}

int main() {
    int n;
    cin >> n;

    generateParentheses(n, 0, 0, "");
}