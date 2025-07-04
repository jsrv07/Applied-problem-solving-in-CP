#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        string longest = "";

        for (int i = 0; i < s.length(); i++) {
            for (int j = s.length() - 1; j >= i; j--) {
                string sub = s.substr(i, j - i + 1);

                string rev = sub;
                reverse(rev.begin(), rev.end());

                if (sub == rev && sub.length() > longest.length()) {
                    longest = sub;
                }
            }
        }

        return longest;
    }
};

int main() {
    

    return 0;
}