class Solution {
public:
    void generate(int n, string s, vector<string>& res, char last) {
        if (n==0) {
            res.push_back(s);
            return;
        }
        generate(n-1, s+'0', res, '0');
        if (last!='1') generate(n-1, s+'1', res, '1');
    }

    vector<string> generateBinaryStrings(int num) {
        vector<string> res;
        generate(num, "", res, '0');
        sort(res.begin(), res.end());
        return res;
    }
};
