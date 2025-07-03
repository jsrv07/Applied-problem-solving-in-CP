// User function Template for C++

class Solution {
  public:
    vector<string> generateBinaryStrings(int num) {
        // Write your code
        vector<string> result;
        string current;
        function<void(int)> backtrack = [&](int n) {
            if (n == 0) {
                result.push_back(current);
                return;
            }
            current.push_back('0');
            backtrack(n - 1);
            current.pop_back();
            if (current.empty() || current.back() != '1') {
                current.push_back('1');
                backtrack(n - 1);
                current.pop_back();
            }
        };
        backtrack(num);
        return result;
    }
};