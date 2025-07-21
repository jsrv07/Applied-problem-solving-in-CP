#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string word=strs[0];
        int index=0;
        bool k=true;
        while(k){
            for(auto c:strs){
                if(index==c.length() || index==word.length()){k=false;break;}
                if(word[index]!=c[index]){k=false;break;}
            }
            index+=1;}
        return word.substr(0,index-1);
    }
};