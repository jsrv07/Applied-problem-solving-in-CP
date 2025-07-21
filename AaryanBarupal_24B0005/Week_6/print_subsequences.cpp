class Solution {
  public:
    void helper(vector<string>& answer, string temp, string s, int n){
        if(n == s.size()){
            if(!temp.empty()){
                answer.push_back(temp);
            }
            return;
        }
        helper(answer, temp, s, n+1);
        helper(answer, temp + s[n], s, n+1);
    }

    vector<string> AllPossibleStrings(string s) {
        vector<string> answer;
        helper(answer, "", s, 0);
        sort(answer.begin(), answer.end());
        return answer;
    }
};
