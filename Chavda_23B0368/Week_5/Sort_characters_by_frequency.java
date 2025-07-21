package Week_5;
import java.util.Arrays;

class Solution {
    public String frequencySort(String s) {
        int[][] freq = new int[76][2];
        for(int i = 0; i < 76; i++) 
            freq[i][0] = i;
        for(char ch : s.toCharArray()) {
            freq[ch-'0'][1]++;
        }
        Arrays.sort(freq, (a,b) -> Integer.compare(b[1],a[1]));
        StringBuilder str = new StringBuilder();
        for(int i = 0; i < 76; i++) {
            if(freq[i][1] == 0)
                break;
            str.append(String.valueOf((char)(freq[i][0]+'0')).repeat(freq[i][1]));
        }
        
        return str.toString();
    }
}