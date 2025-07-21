class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(char c: s){
            freq[c]++;
        }

        vector<pair<char,int>>freqvector(freq.begin(),freq.end());

        sort(freqvector.begin(),freqvector.end(),[](auto& a,auto& b){
            return a.second>b.second;
        });

        string result;
        for(auto& val: freqvector){
            result.append(val.second,val.first);
        }
        return result;
    }
};