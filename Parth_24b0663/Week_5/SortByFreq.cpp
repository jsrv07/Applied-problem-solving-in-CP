class Solution {
public:
    static bool compare(pair<char,int> &a,pair<char,int> &b){
         return a.second > b.second;
    }
    string frequencySort(string s) {
        unordered_map<int,int>um;
        for(int i = 0;i < s.length();i++){
            um[s[i]]++;
        }
        vector<pair<char,int>>res(um.begin(),um.end());
        sort(res.begin(),res.end(),compare);
        string str = "";
        for(auto val : res){
            str += string(val.second,val.first);
        }
    return str;
    }
};