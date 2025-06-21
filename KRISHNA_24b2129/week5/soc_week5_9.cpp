#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
    if (s.empty()) return "";

    int start = 0, maxLen = 1;
    auto expand = [&](int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        int len = right - left - 1;
        if (len > maxLen) {
            maxLen = len;
            start = left + 1;
        }
    };

    for (int i = 0; i < s.size(); i++) {
        expand(i, i);  
        expand(i, i + 1);
    }

    return s.substr(start, maxLen);
}

int main() {
    string s;
    cin>>s;
    cout << longestPalindrome(s); 
}