class Solution {
    void expand(const string& s, int l, int r, int& start, int& maxLen){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            --l;
            ++r;
        }

        int len = r - l - 1;
        if (len > maxLen) {
            maxLen = len;
            start = l + 1;
        }
    }

public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        int start = 0, maxLen = 1;

        for (int i=0; i<s.size(); ++i){
            expand(s, i, i, start, maxLen);
            expand(s, i, i + 1, start, maxLen);
        }

        return s.substr(start, maxLen);
    }

};
