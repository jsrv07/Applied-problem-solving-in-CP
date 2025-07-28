class Solution {
public:
    vector<string> ans;

    bool isValid(string& temp) {
        int cnt = 0;
        for (auto &it : temp) {
            if (it == '(') cnt++;
            else cnt--;
            if (cnt < 0) return false;
        }
        return cnt == 0;
    }

    void solve(string& temp, int n) {
        if (temp.length() == 2*n) {
            if (isValid(temp)) ans.push_back(temp);
            return;
        }

        temp.push_back('(');
        solve(temp, n);
        temp.pop_back();

        temp.push_back(')');
        solve(temp, n);
        temp.pop_back();
    }

    vector<string> generateParenthesis(int n) {
        string temp = "";
        solve(temp, n);
        return ans;
    }
};