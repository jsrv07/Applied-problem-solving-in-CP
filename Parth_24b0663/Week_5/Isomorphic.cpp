class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> ans,ans1;
        for(int i=0;i<s.size();i++){
            if(ans.find(s[i])==ans.end()) {ans[s[i]]=t[i];}
            else if(ans[s[i]]!=t[i]) {return false;}
            if(ans1.find(t[i])==ans1.end()) {ans1[t[i]]=s[i];cout<<"m";}
            else if(ans1[t[i]]!=s[i]) {return false; cout<<" g";}
        }
        return true;
    }
};