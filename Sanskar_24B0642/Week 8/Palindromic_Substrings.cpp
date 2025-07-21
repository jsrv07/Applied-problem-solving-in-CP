#include <iostream>
#include <string>
using namespace std;

int countSubstrings(string s) {
    int n = s.length(), count = 0;

    for (int center = 0; center < 2 * n - 1; ++center) {
        int left = center / 2;
        int right = left + (center % 2);

        while (left >= 0 && right < n && s[left] == s[right]) {
            ++count;
            --left;
            ++right;
        }
    }

    return count;
}

int main() {
    string s;
    cin >> s;

    cout << countSubstrings(s) << endl;

    return 0;
}
