#include <bits/stdc++.h>
using namespace std;

void generateBinaryStrings(int n, string str, char lastChar) {
    if (n == 0) {
        cout << str << endl;
        return;
    }
    generateBinaryStrings(n - 1, str + '0', '0');
    if (lastChar == '0') {
        generateBinaryStrings(n - 1, str + '1', '1');
    }
}

int main() {
    int n;
    cin >> n;
    generateBinaryStrings(n, "", '0');
}