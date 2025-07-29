class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> a;
        for(auto &it:s)
        a[it]++;
        for(auto &it:t)
        a[it]--;
        for(auto &it:a)
        if(it.second!=0) return false;
        return true;
    }
};