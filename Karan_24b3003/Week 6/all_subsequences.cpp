class Solution {
public:
    vector<string> getSubsequences(string s) {
        vector<string> result;
        generate(s, 0, "", result);
        return result;
    }

private:
    void generate(const string& s, int index, string current, vector<string>& result) {
        if (index == s.length()) {
            result.push_back(current);
            return;
        }
        generate(s, index + 1, current + s[index], result);
        generate(s, index + 1, current, result);
    }
};
