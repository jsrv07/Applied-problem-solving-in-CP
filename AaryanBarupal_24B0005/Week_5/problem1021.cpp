class Solution {
public:
    void helper_fxn(string& temp,string& answer){
        if(temp.size()>2){
            for(int i=1;i<temp.size()-1;i++){
                answer.push_back(temp[i]);
            }
        }
    }
    string removeOuterParentheses(string s) {
        string temp;
        string answer="";
        stack<char>st;
        for(auto ch: s){
            if(ch=='('){
                temp.push_back(ch);
                st.push(ch);
            }
            if(ch==')'){
                temp.push_back(ch);
                st.pop();
            }
            if(st.empty()){
                helper_fxn(temp,answer);
                temp.clear();
            }
        }
        return answer;
    }
};

