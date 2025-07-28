int countNumbersWithUniqueDigits(int n) {
    if (n == 0) return 1;
    int res = 10, uniqueDigits = 9, availableNumber = 9;
    while (n-- > 1 && availableNumber > 0) {
        uniqueDigits *= availableNumber;
        res += uniqueDigits;
        availableNumber--;
    }
    return res;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    system("pause");
    return 0;
}