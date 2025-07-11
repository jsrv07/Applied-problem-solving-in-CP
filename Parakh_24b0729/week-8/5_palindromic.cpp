int countSubstrings(string s) {
    int n = s.size(), res = 0;
    for (int center = 0; center < 2 * n - 1; ++center) {
        int l = center / 2, r = l + center % 2;
        while (l >= 0 && r < n && s[l] == s[r]) {
            res++; l--; r++;
        }
    }
    return res;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    system("pause");
    return 0;
}