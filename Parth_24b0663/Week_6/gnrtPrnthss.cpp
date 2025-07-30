class Solution {
public:
    vector<string> j;
    void gnrtPrnths(int close,int open,string k){
    if(open>0){
        gnrtPrnths(close,open-1,k+"(");
    }
    if(open<close){
        gnrtPrnths(close-1,open,k+")");
    }
    if(close==0 && open==0){
        j.push_back(k);
        return;
    }
}
    vector<string> generateParenthesis(int n) {
        gnrtPrnths(n,n,"");
        return j;
    }
};