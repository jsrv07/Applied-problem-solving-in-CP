class Solution {
public:
    vector<string> ans;
    void genS(string &s,int n){
    if(n==0) {ans.push_back(s);return;}
    s=s+"0";
    genS(s,n-1);
    s.pop_back();
    if((s.size()>0 && s[s.size()-1]!='1') || (s.size()==0)) {
    s=s+"1";
    genS(s,n-1);
    s.pop_back();}
    return;
    }
    vector<string> generateBinaryStrings(int n) {
       string s="";
       genS(s,n);
        return ans;
    }
};
