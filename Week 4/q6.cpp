#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int min_operations(string x, string s) {
    unordered_set<char> set_x;
    for (char c : x) set_x.insert(c);

    for (char c : s) {
        if (set_x.find(c) == set_x.end()) {
            return -1;
        }
    }

    string cur = x;
    int ops = 0;

    for (int i = 0; i <= (int)(s.size() + 5); i++) {
        if (cur.find(s) != string::npos) {
            return ops;
        }
        cur += cur;
        ops++;
    }

    if (cur.find(s) == string::npos)
        return -1;

    return ops;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        cout << min_operations(x, s) << endl;
    }
    return 0;
}
