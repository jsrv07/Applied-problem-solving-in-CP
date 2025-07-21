class Solution {
public:
    bool isRotation(string s1, string s2) {
        if (s1.length() != s2.length()) return false;
        string combined = s1 + s1;
        return combined.find(s2) != string::npos;
    }
};