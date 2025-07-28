class Solution {
  public:
    vector<string> AllPossibleStrings(string s) {
        // Code here
        vector<string> result;
        int n = s.length();
        int totalSubsequences = 1 << n; 
        for (int i = 1; i < totalSubsequences; ++i) {
            string subsequence;
            for (int j = 0; j < n; ++j) {
                if (i & (1 << j)) {
                    subsequence += s[j];
                }
            }
            result.push_back(subsequence);
        }
        sort(result.begin(), result.end());
        return result;
        
    }
};