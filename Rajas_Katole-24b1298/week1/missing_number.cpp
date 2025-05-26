#include <iostream>
using namespace std;

int main() {
    long long n, sum = 0;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        long long num;
        cin >> num;
        sum += num;
    }
    long long total = n * (n + 1) / 2;
    cout << total - sum << endl;
    return 0;
}