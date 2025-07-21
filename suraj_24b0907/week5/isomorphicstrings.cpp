#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> dict;
        set<char> se;
        int l=s.length();
        if(l!=t.length()){return false;}
        for(int i=0;i<l;i++){
            auto it=dict.find(s[i]);
            if(it!=dict.end()){
                if(dict[s[i]]!=t[i]){return false;}
            }
            else {dict[s[i]]=t[i];}
        }
        for (auto it: dict){se.insert(it.second);}
        if(se.size()==dict.size()){return true;}
        return false;
    }
};