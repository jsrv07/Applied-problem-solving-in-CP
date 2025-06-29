package Week_6;
import java.util.ArrayList;
import java.util.List;

class Solution {
    private List<String> res;
    
    public List<String> generateParenthesis(int n) {
        res = new ArrayList<>();
        StringBuilder sb = new StringBuilder(20);
        backtrack(sb , n , 0 , 0);
        return res;
    }

    public void backtrack(StringBuilder sb , int n , int open , int close){
        if(open == n && close == n && sb.length() == 2*n){
            res.add(new String(sb));
            return;
        }
        if(open < n){
            sb.append('(');
            backtrack(sb, n, open+1, close);
            sb.deleteCharAt(sb.length()-1);
        }
        if(close < open){
            sb.append(')');
            backtrack(sb, n, open, close+1);
            sb.deleteCharAt(sb.length()-1);
        }
    }
}