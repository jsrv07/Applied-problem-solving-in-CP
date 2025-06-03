#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long total = n * (n + 1) / 2;
    long long sum = 0;
    for (int i = 0; i < n - 1; i++) {
        long long num;
        cin >> num;
        sum += num;
    }
    cout << total - sum << endl;
    return 0;
}
