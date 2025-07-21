#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        int idx=0,count=0;
        string k="";
        for(auto c:s){
            if(c=='('){count+=1;}
            else {count -= 1;}
            if(count == 1 && c=='('){}
            else if (count == 1 && c==')'){k+=c;}
            else if(count!=0){k+=c;}
        }
        return k;
    }
};