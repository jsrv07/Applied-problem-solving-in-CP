class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int d=0;
        for(char ch:s){
            if(ch=='('){
                if(d>0) ans+=ch;
                d++;
            }
            else{
                d--;
                if(d>0) ans+=ch;
            }
        }
        return ans;
    }
};