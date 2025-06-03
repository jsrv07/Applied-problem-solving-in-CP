class Solution {
public:
    // Function to find the Nth root of M
    int NthRoot(int N, int M) {
        int low = 1, high = M;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long power = 1;
            
            // Compute mid^N carefully to avoid overflow
            for (int i = 0; i < N; ++i) {
                power *= mid;
                if (power > M) break;
            }

            if (power == M)
                return mid;
            else if (power < M)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return -1;
    }
};
