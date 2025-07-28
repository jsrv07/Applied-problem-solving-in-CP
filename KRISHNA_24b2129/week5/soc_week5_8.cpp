#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
    unordered_map<char, int> freq
    for (char c : s) {
        freq[c]++;
    }
    vector<pair<char, int>> chars(freq.begin(), freq.end());
    sort(chars.begin(), chars.end(), [](auto &a, auto &b) {
        return a.second > b.second;
    });
    string result = "";
    for (auto &p : chars) {
        result += string(p.second, p.first);
    }

    return result;
}

int main() {
    string s ;
    cin>>s;
    cout << frequencySort(s);
}