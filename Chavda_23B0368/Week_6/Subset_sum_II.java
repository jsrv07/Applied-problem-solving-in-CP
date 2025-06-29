package Week_6;
import java.util.ArrayList;
import java.util.Arrays;

class Solution {
    static ArrayList<ArrayList<Integer>> res;
    public static ArrayList<ArrayList<Integer>> printUniqueSubsets(int[] nums) {
        res = new ArrayList<>();
        Arrays.sort(nums);
        dfs(nums, 0, new ArrayList<>());
        return res;
    }
    
    private static void dfs(int[] nums, int idx, ArrayList<Integer> list) {
        if(idx == nums.length) {
            if(!res.contains(list))
                res.add(new ArrayList<>(list));
            return ;
        }
        
        list.add(nums[idx]);
        dfs(nums, idx+1, list);
        list.remove(list.size()-1);
        dfs(nums, idx+1, list);
        return ;
    }
}