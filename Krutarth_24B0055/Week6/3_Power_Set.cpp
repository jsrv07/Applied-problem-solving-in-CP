class Solution {
    void generate(const string& s, int index, string& current, vector<string>& result){
        if(index == s.size()){
            if (!current.empty()) result.push_back(current);
            return;
        }
        generate(s, index + 1, current, result);
        current.push_back(s[index]);
        generate(s, index + 1, current, result);
        current.pop_back();
    }

  public:
    vector<string> AllPossibleStrings(string s) {
        vector<string> result;
        string current;
        generate(s, 0, current, result);
        sort(result.begin(), result.end());
        return result;
    }
};

