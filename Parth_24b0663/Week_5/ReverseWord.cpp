class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string word, result;

        while (iss >> word) {
            if (!result.empty()) result = " " + result;
            result = word + result;
        }

        return result;
    }
};