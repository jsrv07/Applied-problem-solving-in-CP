package Week_1;
import java.util.*;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long total = (long) n * (n + 1) / 2;
        long sum = 0;
        
        for (int i = 0; i < n - 1; i++) {
            sum += sc.nextInt();
        }
        
        System.out.println(total - sum);
        sc.close();
    }
}