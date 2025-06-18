class Solution {
public:
    double nthRoot(double x, int n, double eps = 1e-7) {
        double low = 0, high = max(1.0, x);
        while (high - low > eps) {
            double mid = (low + high) / 2;
            double val = pow(mid, n);
            if (val < x)
                low = mid;
            else
                high = mid;
        }
        return low;
    }
};