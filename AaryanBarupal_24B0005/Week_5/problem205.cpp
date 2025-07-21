class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        map<char, char> m;
        set<char> used;

        for (int i = 0; i < s.size(); ++i) {
            if (m.count(s[i])) {
                if (m[s[i]] != t[i]) return false;
            }
            else {
                if (used.count(t[i])) return false;
                m[s[i]] = t[i];
                used.insert(t[i]);
            }
        }
        return true;
    }
};
