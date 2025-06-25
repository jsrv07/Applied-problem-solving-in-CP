class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string w;
        vector<string> words;
        for(char ch:s){
            if(ch==' '){
                if(!w.empty()){
                    words.push_back(w);
                    w.clear();
                }
            }
            else w+=ch;
        }
        if(!w.empty()) words.push_back(w);
        for(int i=words.size()-1;i>=0;i--){
            ans+=words[i];
            if(i>0) ans+=' ';
        }
        return ans;
    }
};