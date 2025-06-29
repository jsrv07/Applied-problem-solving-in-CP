#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){return false;}
        unordered_map<char,int> dict;
        for(auto c:s){
            auto it = dict.find(c);
            if(it!=dict.end()){dict[c]+=1;}
            else {dict[c]=1;}
        }
        for(auto c:t){
            auto it=dict.find(c);
            if(it!=dict.end()){dict[c]-=1;}
            else {return false;}
        }
        for (auto it :dict){
            if(dict[it.first]!=0){return false;}
        }
        return true;
    }
};