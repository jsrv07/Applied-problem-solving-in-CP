class Solution {
    static bool comparePairs(const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second;
    }

public:
    string frequencySort(string s) {
        unordered_map<char, int> freqMap;
        vector<pair<char, int>> freqVec;
        string result;

        for (char c : s) {
            freqMap[c]++;
        }

        for(const auto& entry : freqMap){
            freqVec.push_back(entry);
        }

        sort(freqVec.begin(), freqVec.end(), comparePairs);

        for(const auto& pair : freqVec){
            result.append(pair.second, pair.first);
        }

        return result;
    }

};