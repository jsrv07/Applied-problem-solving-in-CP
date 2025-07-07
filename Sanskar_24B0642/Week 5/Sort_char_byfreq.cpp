#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

    // Create a vector of pairs and sort by frequency
    vector<pair<int, char>> vec;
    for (auto &p : freq) {
        vec.push_back({p.second, p.first});
    }

    sort(vec.rbegin(), vec.rend()); // sort in descending order of frequency

    string result;
    for (auto &p : vec) {
        result += string(p.first, p.second); // repeat character p.second, p.first times
    }

    return result;
}

int main() {
    string s;
    cin >> s;

    cout << frequencySort(s) << "\n";

    return 0;
}
