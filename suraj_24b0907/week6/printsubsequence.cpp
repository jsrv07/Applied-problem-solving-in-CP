#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void generateSubsequences(int index, string &s, string current, vector<string> &subsequences) {
        if (index == s.size()) {
            if (!current.empty()) {
                subsequences.push_back(current); 
            }
            return;
        }
        generateSubsequences(index + 1, s, current + s[index], subsequences);
        generateSubsequences(index + 1, s, current, subsequences);
    };
    
    vector<string> AllPossibleStrings(string s) {
        vector<string> subsequences;
        generateSubsequences(0, s, "", subsequences);
        sort(subsequences.begin(), subsequences.end());
        
        return subsequences;
    };
};