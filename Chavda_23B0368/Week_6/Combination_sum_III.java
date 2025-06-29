package Week_6;
import java.util.ArrayList;
import java.util.List;

class Solution {
    List<List<Integer>> res;
    public List<List<Integer>> combinationSum3(int k, int n) {
        res = new ArrayList<>();
        dfs(k, n, 0, 0, 0, new ArrayList<>());
        return res;
    }

    private void dfs(int k, int n, int curr, int prev, int count, List<Integer> list) {
        if(count == k && curr == n) {
            res.add(new ArrayList<>(list));
            return ;
        } else if(count >= k || curr >= n || prev == 9) {
            return ;
        } 

        for(int i = prev+1; i <= 10-k+count; i++) {
            list.add(i);
            dfs(k, n, curr+i, i, count+1, list);
            list.remove(list.size()-1);
        }
        return ;
    }
}