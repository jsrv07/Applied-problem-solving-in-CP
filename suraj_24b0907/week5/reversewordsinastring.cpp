#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        int idx=0;
        v.push_back("");
        for (auto c:s){
            if(c==' '){v.push_back("");idx+=1;}
            else {v[idx]+=c;cout<<c<<endl;}
        }
        cout << v[v.size()-1]<<"l"<<endl;
        string t="";
        for(int i=v.size()-1;i>=0;i-=1){
            cout << i <<v[i]<<"l"<<endl;
            if(v[i]!=""){t+=v[i];t+=" ";}
        }
        t.pop_back();
        return t;
    }
};