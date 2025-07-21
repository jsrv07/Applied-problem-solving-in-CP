package Week_5;

class Solution {
    public String longestCommonPrefix(String[] strs) {
        int n = strs.length;
        int idx = -1;
        for(int i = 0; i < 200; i++) {
            boolean yes = true;
            if(i >= strs[0].length())
                break;
            char ch = strs[0].charAt(i);
            for(int j = 1; j < n; j++) {
                if(i >= strs[j].length() || strs[j].charAt(i) != ch) {
                    yes = false;
                    break;
                }
            }
            if(yes)
                idx = i;
            else 
                break;
        }
        return strs[0].substring(0, idx+1);
    }
}