class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        int count1[128]={0};
        int count2[128]={0};
        for(int i=0;i<s.length();i++){
            if(count1[s[i]] == 0 && count2[t[i]] == 0){
                count1[s[i]]=t[i];
                count2[t[i]]=s[i];
            }
            else{
                if(count1[s[i]]!=t[i] ||count2[t[i]]!=s[i]){
                    return false;
                }
            }
        }
        return true;
    }
};