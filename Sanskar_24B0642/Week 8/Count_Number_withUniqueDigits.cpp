#include <iostream>
using namespace std;

int countNumbersWithUniqueDigits(int n) {
    if (n == 0) return 1;

    int ans = 10, uniqueDigits = 9, available = 9;

    for (int i = 2; i <= n && available > 0; ++i) {
        uniqueDigits *= available;
        ans += uniqueDigits;
        --available;
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    cout << countNumbersWithUniqueDigits(n) << endl;

    return 0;
}
