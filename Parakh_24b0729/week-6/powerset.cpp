class Solution {
public:
    void generateSubsequences(string& s, int index, string current, vector<string>& result) {
        if (index == s.length()) {
            if (!current.empty()) {
                result.push_back(current);
            }
            return;
        }

        // Include current character
        generateSubsequences(s, index + 1, current + s[index], result);

        // Exclude current character
        generateSubsequences(s, index + 1, current, result);
    }

    vector<string> AllPossibleStrings(string s) {
        vector<string> result;
        generateSubsequences(s, 0, "", result);
        sort(result.begin(), result.end()); 
        return result;
    }
};
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    system("pause");
    return 0;
}