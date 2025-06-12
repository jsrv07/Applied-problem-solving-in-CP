#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // Count frequency of each character
        for (char c : s) {
            freq[c]++;
        }

        // Create a vector of pairs (char, frequency)
        vector<pair<char, int>> freqVec(freq.begin(), freq.end());

        // Sort by frequency in descending order
        sort(freqVec.begin(), freqVec.end(),
             [](const pair<char, int>& a, const pair<char, int>& b) {
                 return a.second > b.second;
             });

        // Build the result string
        string result;
        for (auto& p : freqVec) {
            result.append(p.second,
                          p.first); // append character p.first, p.second times
        }

        return result;
    }
};

int main() {
    
    return 0;
}