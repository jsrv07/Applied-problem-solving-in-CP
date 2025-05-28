package Week_1;
import java.io.*;
import java.util.*;

class Solution {
    static final int MOD = 1_000_000_007;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int x = Integer.parseInt(st.nextToken());

        int[] coins = new int[n];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            coins[i] = Integer.parseInt(st.nextToken());
        }

        long[] dp = new long[x + 1];
        dp[0] = 1;

        // Permutations: Outer loop on target sum
        for (int j = 1; j <= x; j++) {
            for (int coin : coins) {
                if (j >= coin) {
                    dp[j] = (dp[j] + dp[j - coin]) % MOD;
                }
            }
        }

        System.out.println(dp[x]);
    }
}
