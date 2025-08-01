#include<bits/stdc++.h>
using namespace std;

string expandFromCenter(string& s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s) {
    if (s.empty()) return "";
    
    string longest = "";
    for (int i = 0; i < s.length(); i++) {
        // Odd-length palindrome
        string odd = expandFromCenter(s, i, i);
        if (odd.length() > longest.length()) longest = odd;
        // Even-length palindrome
        string even = expandFromCenter(s, i, i + 1);
        if (even.length() > longest.length()) longest = even;
    }
    return longest;
}

int main(){
    string s;
    cin >> s;
    cout << longestPalindrome(s);
}