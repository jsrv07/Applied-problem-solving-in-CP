package Week_5;

class Solution {
    public String reverseWords(String s) {
        String[] words = s.trim().split("\\s+");
        StringBuilder ans = new StringBuilder();
        for(String word : words) {
            ans.insert(0, " " + word);
        }
        ans.deleteCharAt(0);
        return ans.toString();
    }
}