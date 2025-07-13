class Solution {
    void getStrings(int i, string &s, vector<string> &ans){
        if(i >= s.length()){
            ans.push_back(s);
            return;
        }
        
        getStrings(i+1, s, ans);
        s[i] = '1';
        getStrings(i+2, s, ans);  
        s[i] = '0';
    }
    
  public:
    vector<string> generateBinaryStrings(int num) {
        string s(num, '0');
        vector<string> ans;
        getStrings(0, s, ans);
        return ans;
    }
};