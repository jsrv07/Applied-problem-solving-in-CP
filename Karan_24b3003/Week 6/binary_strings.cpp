class Solution {
public:
    vector<string> generateBinaryStrings(int n) {
        vector<string> result;
        generate(n, "", result);
        return result;
    }

private:
    void generate(int n, string current, vector<string>& result) {
        if (current.length() == n) {
            result.push_back(current);
            return;
        }

        generate(n, current + "0", result);
        generate(n, current + "1", result);
    }
};
