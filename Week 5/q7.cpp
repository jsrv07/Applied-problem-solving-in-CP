#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length() != t.length())
        return false;

    int map[26] = {0};

    for(auto i : s) {
        map[i - 'a']++;
    }
        
    for(auto i : t) {
        map[i - 'a']--;
    }

    for(int i = 0; i < 26; i++) {
        if(map[i] > 0) {
            return false;
        }
    }

    return true;
}

int main(){
    string s, t;
    cin >> s >> t;
    cout << isAnagram(s, t) ? "true" : "false";
}