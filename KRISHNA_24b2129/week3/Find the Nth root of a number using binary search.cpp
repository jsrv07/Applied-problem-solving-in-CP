#include <iostream>
using namespace std;

long long power(long long base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
        if (result > 1e18) break; 
    }
    return result;
}

void find_nth_root(int n, int m) {
    long long start = 1, end = m;
    
    while (start <= end) {
        long long mid = start + (end - start) / 2;
        long long val = power(mid, n);

        if (val == m) {
            cout << mid << endl;
            return;
        } else if (val < m) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    cout << -1 << endl;  
}

int main() {
    int n, m;
    cin >> n >> m;
    find_nth_root(n, m);
    return 0;
}