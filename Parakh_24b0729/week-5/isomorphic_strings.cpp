#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        int mapS[256] = {0};
        int mapT[256] = {0};

        for (int i = 0; i < s.length(); i++) {
            if (mapS[s[i]] != mapT[t[i]])
                return false;
            
            // Store index + 1 to differentiate from default 0
            mapS[s[i]] = i + 1;
            mapT[t[i]] = i + 1;
        }

        return true;
    }
};

int main() {
    
    return 0;
}