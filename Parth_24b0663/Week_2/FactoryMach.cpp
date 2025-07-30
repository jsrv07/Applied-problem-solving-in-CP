#include <bits/stdc++.h>
using namespace std;

bool canProduce(const vector<long long>& machines, long long time, long long t) {
    long long total = 0;
    for (long long k : machines) {
        total += time / k;
        if (total >= t) return true;
    }
    return total >= t;
}

long long minTimeToProduce(int n, long long t, const vector<long long>& machines) {
    long long low = 1;
    long long high = *min_element(machines.begin(), machines.end()) * t;
    while (low < high) {
        long long mid = (low + high) / 2;
        if (canProduce(machines, mid, t))
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}

int main() {
    int n;
    long long t;
    cin >> n >> t;
    vector<long long> machines(n);
    for (int i = 0; i < n; ++i) {
        cin >> machines[i];
    }
    cout << minTimeToProduce(n, t, machines) << endl;
    return 0;
}