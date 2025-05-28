package Week_1;
import java.util.*;
class Solution {
    public static List<Long> knights = new ArrayList<>();
    static {
        knights.add(0l);
        knights.add(6l);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
 
        for (int i = 0; i < t; i++) {
            if (i <= knights.size()-1) {
                System.out.println(knights.get(i) + "\n");
            } else {
                long n = i + 1;
                long result = (n * n) * (n * n - 1) / 2 - 4 * (n - 1) * (n - 2);
                knights.add(result);
                System.out.println(result + "\n");
            }
        }
 
        sc.close();
    }
}