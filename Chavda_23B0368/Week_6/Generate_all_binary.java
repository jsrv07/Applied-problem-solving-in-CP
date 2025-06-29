package Week_6;
import java.util.ArrayList;
import java.util.List;

class Solution {
    private static List<String> res;
    public static List<String> generateBinaryStrings(int n) {
        res = new ArrayList<>();
        dfs(n, -1, "");
        return res;
    }
    
    private static void dfs(int n, int prev, String num) {
        if(n == 0) {
            res.add(num);
            return ;
        }
            
        dfs(n-1, 0, num+"0");
        if(prev!=1)
            dfs(n-1, 1, num+"1");
        return ;
    }
}
