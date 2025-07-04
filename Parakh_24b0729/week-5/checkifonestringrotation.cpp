#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool areRotations(string s1, string s2) {

        if (s1.length() != s2.length()) {
            return false;
        }


        if (s1.empty() && s2.empty()) {
            return true;
        }


        string s1s1 = s1 + s1;

        if (s1s1.find(s2) != string::npos) {
            return true;
        } else {
            return false;
        }
    }
};
int main(){
    return 0;
}