class Solution {
public:
    void backtrack(int open, int close, string current, vector<string>& result) {
        if (open == 0 && close == 0) {
            result.push_back(current);
            return;
        }

        if (open > 0)
            backtrack(open - 1, close, current + "(", result);

        if (close > open)
            backtrack(open, close - 1, current + ")", result);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(n, n, "", result);
        return result;
    }
};
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    system("pause");
    return 0;
}