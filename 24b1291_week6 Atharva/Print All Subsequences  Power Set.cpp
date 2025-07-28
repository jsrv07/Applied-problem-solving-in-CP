class Solution {
public:
    void solve(string& s, int i, string curr, vector<string>& res) {
        if (i == s.size()) {
            if (!curr.empty()) res.push_back(curr);
            return;
        }
        solve(s, i + 1, curr + s[i], res);
        solve(s, i + 1, curr, res);
    }

    vector<string> AllPossibleStrings(string s) {
        vector<string> res;
        solve(s, 0, "", res);
        sort(res.begin(), res.end());
        return res;
    }
};
