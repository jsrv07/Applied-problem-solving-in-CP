class Solution {
public:
    void helper(string temp,vector<string>& answer,int open,int close){
        if(open==0 && close==0){
            answer.push_back(temp);
            return;
        }
        if(open!=0){
            helper(temp+'(',answer,open-1,close);
        }
        if(close>open){
            helper(temp+')',answer,open,close-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>answer;
        helper("",answer,n,n);
        return answer;
    }
};