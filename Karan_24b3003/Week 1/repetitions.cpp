#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int max = 1, c = 1;
    char prev = s[0];

    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == prev) {
            c++;
        } else {
            c = 1;
            prev = s[i];
        }
        if (c > max) max=c;
    }
    cout << max << endl;
    return 0;
}