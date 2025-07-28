
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;

        for (int i = 0; i < s.length(); i++) {
            int val = roman[s[i]];
            int nextVal = (i + 1 < s.length()) ? roman[s[i + 1]] : 0;

            if (val < nextVal)
                total -= val;  // subtract for cases like IV, IX, etc.
            else
                total += val;
        }

        return total;
    }
};
int main(){
    return 0;
}
