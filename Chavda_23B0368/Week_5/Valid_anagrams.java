package Week_5;

class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length())
            return false;
        int freq [] = new int[26];
        for(int i = 0; i < s.length(); i++) {
            freq[s.charAt(i)-'a']++;
        }

        for(char ch : t.toCharArray()) {
            freq[ch-'a']--;
            if(freq[ch-'a'] < 0)
                return false;
        }
        return true;
    }
}