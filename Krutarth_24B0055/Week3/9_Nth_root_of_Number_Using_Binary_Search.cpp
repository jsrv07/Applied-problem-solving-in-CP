class Solution{
  public:
    int nthRoot(int n, int m){
        if (n == 1) {
            return m;
        }

        long long l = 1LL, r = m, mid;
        long long ans = -1;
        while (l <= r) {
            mid = (l + r) / 2;
            long long x = mid;
            for(int i=1; i<n; i++) {
                x *= mid;
                if (x > m * 1LL)
                    break;
            }
            if (x == m * 1LL) {
                ans = mid;
                break;
            } else if (x > m)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return int(ans);
    }
};