class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mapST,mapTS;
        for(char ch:s){
            mapST[ch]++;
        }
        for(char ch:t){
            mapTS[ch]++;
        }
        return mapST==mapTS;
    }
};