package Week_5;

class Solution {
    public String removeOuterParentheses(String s) {
        int open = 0;
        StringBuilder ans = new StringBuilder();
        for(char ch : s.toCharArray()) {
            if(ch == '(') {
                open++;
                if(open > 1)
                    ans.append(ch);
            } else {
                if(open > 1)
                    ans.append(ch);
                open--;
            }
        }
        return ans.toString();
    }
}