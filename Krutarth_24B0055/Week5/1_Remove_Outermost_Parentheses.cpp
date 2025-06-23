class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int depth = 0;

        for(char ch : s){
            if(ch == '('){
                if(depth > 0){
                    result += ch;
                }
                depth++;
            }
            else if(ch == ')'){
                depth--;
                if(depth > 0){
                    result += ch;
                }
            }
        }

        return result;
    }
};
