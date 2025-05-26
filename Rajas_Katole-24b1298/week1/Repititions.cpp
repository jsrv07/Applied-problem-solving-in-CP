#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int max_length = 1;
    int current_length = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            current_length++;
            max_length = max(max_length, current_length);
        } else {
            current_length = 1;
        }
    }

    cout << max_length << endl;
    return 0;
}