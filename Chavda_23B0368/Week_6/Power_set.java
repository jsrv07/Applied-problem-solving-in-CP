package Week_6;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Solution {
    public List<String> AllPossibleStrings(String s) {
        List<String> res = new ArrayList<>();
        int n = s.length();
        StringBuilder sb = new StringBuilder();
        
        for(int mask = 1; mask < (1<<n); mask++) {
            sb.setLength(0);
            for(int i = 0; i < n; i++) {
                if(((mask >> i) & 1) == 1)
                    sb.append(s.charAt(i));
            }
            res.add(sb.toString());
        }
        Collections.sort(res);
        return res;
    }
}