#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
    map<char, char> mp1, mp2;
    for(int i(0); i<s.size(); i++){
        if((mp1.count(s[i]) == 0 && mp2.count(t[i]) == 0)) {
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
        else {
            if(mp1[s[i]] != t[i] || mp2[t[i]] != s[i]) return false;
        }
    }
    return true;
}

int main(){
    string s, t;
    cin >> s >> t;
    cout << isIsomorphic(s, t) ? "true" : "false";
}